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

node* removeduplicates(node* head){
    if(head = NULL || head->next == NULL){
        return head;
    }
    node* curr = head, next = NULL;
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            next = curr->next;
            curr->next = next->next;
            delete(next);
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

