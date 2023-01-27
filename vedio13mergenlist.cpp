#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node() : data(0), next(NULL){}
    node(int d) : data(d), next(NULL){}
    node(int d, node* next) : data(0), next(next){}
    
};

node* mergenlists(vector<node*> llist){
    if(lists.size()==0){
        return NULL;
    }else if(llist.size()==1){
        return llist[0];
    }else {
        int end = llist.size()-1, i, j;
        while(last>0){
            int i=0, j = end;
            while(i<j){
                llist[i] = mergenlists(llist[i], llist[j]);
                i++;
                j--;
                if(i>=j){
                    last = j;
                }
            }
        }
    }
    return llist[0];
}

int main()
{
    cout<<"Hello World";

    return 0;
}
