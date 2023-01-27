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

node* reverseasetofvalues(node* head, int z){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* prev = NULL, curr = head, next = NULL;
    int k=0;
    while(curr != NULL && k < z ){
        k++;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if(next != NULL)
        head->next = reverseasetofvalues(next, z);
    return head;    
}

int main()
{
    

    return 0;
}
