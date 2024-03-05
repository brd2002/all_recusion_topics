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
int main (){
    vector<int>arr {1,2,3,4,5};
    Node * head ;
    head = createLinkedList(arr , 0 , NULL);
    Node * temp = head;
    while (temp!= NULL){
        cout << temp->data << endl;
        temp = temp->next ;
    }

    return 0 ;
}