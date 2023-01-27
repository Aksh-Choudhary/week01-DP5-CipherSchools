#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sorting(vector<int> &arr){
    int a = 0, b=0, c = arr.size() - 1;
    while(a <= b){
        switch(arr[0]){
            case 0:
                swap(arr[a], arr[b]);
                a++;
                b++;
                break;
            case 1:
                b++;
                break;
            case 2:
                swap(arr[b], arr[c]);
                c++;
                break;
        }
    }
}

int main ()
{
  cout << "Hello World";

  return 0;
}

