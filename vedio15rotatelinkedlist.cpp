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

node* rotate(node* head, int z){
    if(head == NULL || head->next == NULL || z==0){
        return head;
    }
    node* m = head, n = NULL;
    int k=0;
    while(m!=NULL && k=z){
        k++;
        m = m->next;
    }
    if(m == NULL){
        return head;
    }
    n = head;
    while(m->next != NULL && n !=NULL){
        m = m->next;
        n = n->next;
    }
    m->next = head;
    head = n->next;
    n->next = NULL;
    return head;
}

int main(){
    
    return 0;
}
