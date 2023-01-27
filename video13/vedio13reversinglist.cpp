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

node* reverse(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* prev = NULL, curr = head, next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

int main()
{
    

    return 0;
}
