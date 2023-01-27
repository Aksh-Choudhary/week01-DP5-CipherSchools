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

node* mergelist(node* a, node* b){
    node* head1 = a, head2 = b;
    node* temp = NULL;
    if(a == NULL){
        return b;
    }
    else {
        if(b == NULL){
            return a;
        }
        else{ 
            if(a->data < b.data){
                temp->next = a;
                a = a->next;
                mergelist(a,b);
            }
            else{
                temp->next = b;
                b = b->next;
                mergelist(a,b);
            }
            
        }
    }
}



int main()
{
    

    return 0;
}

