#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int rainwater(vector<int> &wlevel ){
    int n = wlevel.size();
    vector<int> lmax(n), rmax(n);
    lmax[0] = wlevel[0];
    rmax[n-1] = wlevel[n-1];
    
    for(int i=1; i<n; i++){
        lmax[i] = max(wlevel[i], lmax[i-1]);
        rmax[n-i-1] = max(wlevel[n-i-1], rmax[n-i]);
    }
    int w = 0;
    for(int i = 1; i<n; i++){
        w += (min(lmax[i], rmax[i]) - wlevel[i]);
    }
    return w;
}

int main()
{
    vector<int> vect{1, 3, 1,1, 3,4};
    int a = rainwater(vect);
    cout<<a;

    return 0;
}
