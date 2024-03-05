//
// Created by bharat on 05-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data ;
    Node * next ;
    Node (int value){
        data = value ;
        next = NULL;
    }
};
Node * createLinkedList(vector<int>&arr , int index , Node * prev ){
    if (index == arr.size()) return prev ;
    Node *temp = new Node(arr[index]);
    temp->next = prev;
    return createLinkedList(arr , index+1 , temp);
}
Node * insertGivenPosition(Node * head , int val , int pos){
    Node * temp = head  ;
    --pos;
    while (--pos){
        temp = temp->next;
    }
    Node * temp2 = new Node(val);
    temp2->next = temp->next ;
    temp->next = temp2;
    return head ;
}
int main (){
    vector<int>arr {1,2,3,4,5};
    Node * head ;
    head = createLinkedList(arr , 0 , NULL);
    head = insertGivenPosition(head , 10 , 2);
    head = insertGivenPosition(head , 30 , 3);
    Node * temp = head;
    while (temp!= NULL){
        cout << temp->data << endl;
        temp = temp->next ;
    }

    return 0 ;
}