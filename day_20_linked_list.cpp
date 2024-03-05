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
// deletions of the node in any position
Node * deleteAnyPosition(Node*head, int pos){
    if (pos == 1) {
        Node * temp = head ;
        head = temp->next ;
        delete temp ;
    }
    Node *curr = head ;
    Node *prev = NULL;
    pos--;
    while (pos--){
        prev = curr ;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}
//ListNode* reverseList(ListNode* head) {
//}
int main (){
    vector<int>arr {1,2,3,4,5};
    Node * head ;
    head = createLinkedList(arr , 0 , NULL);
    head = insertGivenPosition(head , 10 , 2);
    head = insertGivenPosition(head , 30 , 3);

    // deletion of the first node
//    if (head != NULL){
//        Node * temp1 = head ;
//        head = temp1->next ;
//        delete temp1 ;
//    }
    // deletion of the last node
    Node * temp1 = head ;
    Node * prev ;
    if (head->next == NULL){
        head = NULL ;
    }
    while (temp1->next != NULL){
        prev = temp1 ;
        temp1 = temp1->next ;
    }
    delete temp1 ;
    prev->next = NULL;
    // completed of the last node delete
    Node * temp = head;
    while (temp!= NULL){
        cout << temp->data << endl;
        temp = temp->next ;
    }
    return 0 ;
}