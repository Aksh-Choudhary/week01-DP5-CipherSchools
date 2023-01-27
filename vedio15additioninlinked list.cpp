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

node* addingllists(node* a, node* b){
    if(a == NULL){
        return b;
    }
    else if(b == NULL){
            return a;
    }
    else{
        node* fake(0);
        node* x = a, y = b, z = &fake;
        int sum = 0, carry = 0;
        while(x != NULL || y != NULL){
            sum = (x == NULL ? 0 : x->data) + (y == NULL ? 0 : y->data) + carry;
            carry = sum/10;
            sum = sum%10;
            z->next = new node(sum);
            z = z->next;
            
            if(x != NULL) x= x->next;
            if(y != NULL) y= y->next;
        }
        if (carry > 0){
            z->next = new node(carry);
        }
        return fake.next;
    }
}

int main()
{
    cout<<"Hello World";

    return 0;
}

