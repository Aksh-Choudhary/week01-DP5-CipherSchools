#include <iostream>
#include<vector>

using namespace std;

void sortedarray(vector<int>& a, int n, vector<int>& b, int m){
    int i = n-1, j = m-1, k = n+m-1;
    while(i >= 0 && j >= 0){
        if(a[i] > b[j]){
            a[k]= a[i];
            i--;
            k--;
            
        }
        else{
            a[k] = b[j];
            j--;
            k--;
            
        }
    }
    while(j>=0){
        a[k] = b[j];
        k--;
        j--;
    }
    
}

int main()
{
    int n,m;
    cout<<"Enter the size of vector A "<<endl;
    cin>>n;
    cout<<"Enter the size of vector B "<<endl;
    cin>>m;
    vector<int> a(n), b(m);
    cout<<"Enter the elements of vector A "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of vector B "<<endl;
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sortedarray(a, n, b, m);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}