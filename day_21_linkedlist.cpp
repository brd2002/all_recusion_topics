//
// Created by bharat on 06-03-2024.
//
#include <bits/stdc++.h >
using namespace std;
class Node {
public:
    int data ;
    Node *next ;
    Node (int value){
        data = value;
        next = NULL;
    }
};
int countNode (Node * head){
    int count = 0 ;
    Node *temp = head;
    while (temp!= NULL){
        count++;
        temp = temp->next ;
    }
    return count;
}
Node* deleteK(Node *head,int K){
    //Your code here
    Node *temp = head;
    Node *prev = NULL;
    if (K == 1)
        return NULL;
    int count = 1 ;
    while (temp){
        if (count == K){
            prev->next = temp->next ;
            delete temp ;
            temp = prev->next ;
            count = 1;
        }else {
            prev = temp;
            temp = temp->next ;
            count++;
        }
    }
    return head;
}
int main (){
    return 0 ;
}