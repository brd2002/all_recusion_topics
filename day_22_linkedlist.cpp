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
Node *createDoublyLinkedList(vector<int>&arr , int index , Node *back ){
    if (index == arr.size()) return NULL;
    Node *temp  = new Node (arr[index]);
    temp->prev = back ;
    temp->next = createDoublyLinkedList(arr, index+1 , temp);
    return temp;
}
void addNode(Node *head, int pos, int data)
{
    // Your code here

//    3 -> 4 -> 5 -> 6 -> 7
//    Input:
//    LinkedList: 2<->4<->5
//    p = 2, x = 6
//    Output: 2 4 5 6
//    Explanation: p = 2, and x = 6. So, 6 is
//    inserted after p, i.e, at position 3
//            (0-based indexing).
    Node *curr = head;
    while(pos--){
        curr = curr->next ;
    }
    Node * temp = new Node (data) ;
    temp->next = curr->next ;
    temp->prev = curr ;
    curr->next = temp;
    temp->next->prev = temp;

}
//Input:
//LinkedList: 25->36->47->58->69->80
//data: 19
//Output:
//19 25 36 47 58 69 80
//Explanation:
//After inserting 19 the sorted linked list will look like the one in the output.
Node *sortedInsert(struct Node* head, int data) {
    // Code here
    if (head->data >= data){
        Node * temp = new Node (data);
        temp->next = head;
        head = temp;
    }else {
        Node *curr = head;
        while (curr->data <= data &&  curr->next != NULL){
            curr = curr->next;
        }
        Node * temp = new Node (data) ;
        if (curr->next == NULL){
            curr->next = temp;
        }else {
            temp->next = curr->next ;
            curr->next = temp;
        }
    }
    return  head;
}
int main (){
    Node *head = NULL ;
//    if (head == NULL){
//        head = new Node (5);
//    }else {
//        Node *temp = new Node (6);
//        Node *temp1 = head;
//        temp1->prev = temp;
//        temp->next = temp1;
//        head = temp;
//    }
vector<int>arr{1,2,4,5,6};
    head = createDoublyLinkedList(arr , 0 , NULL);
    Node *temp = head;
    while (temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0 ;
}