//
// Created by bharat on 07-03-2024.
//
#include <bits/stdc++.h >
using namespace std;
// doubly linked list initialization
class Node{
public:
    int data ;
    Node * next ;
    Node * prev ;
    Node (int val ){
        data = val ;
        next = NULL;
        prev = NULL;
    }
};
int main (){
    Node *head;
    if (head == NULL){
        head = new Node (5);
    }else {
        Node *temp = new Node (6);
        Node *temp1 = head;
        temp1->prev = temp;
        temp->next = temp1;
        head = temp;
    }
    return 0 ;
}