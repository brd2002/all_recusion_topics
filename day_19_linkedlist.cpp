//
// Created by bharat on 04-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data ;
    Node * next ;
    Node(int val){
        data = val;
        next = NULL;
    }
};
// insert node using recursion
Node * insertNode (vector<int>&arr , int index ){
    if (index == arr.size()){
        return NULL;
    }
    Node * temp ;
    temp = new Node (arr[index]);
    temp->next = insertNode(arr , index+1);
    return temp;
}
int main (){
//    Node * head = NULL ;
//    head = new Node(4);
//Node *tail = NULL;
//vector<int>arr{1,2,3,4,5};
//head = insertNode(arr , 0) ;
//    for (int i = 0 ; i < arr.size() ; i++){
//        if (head == NULL){
//            head = new Node(arr[i]);
//
//        }else {
//            Node * temp = new Node (arr[i]);
//            temp->next = head ;
//            head = temp ;
//        }
//    }
//    for (int i = 0 ; i < arr.size() ; i++){
//        if (head == NULL){
//            head = new Node(arr[i]);
//            tail = head;
//
//        }else {
//            tail->next = new Node(arr[i]);
//            tail = tail->next;
//        }
//    }
//    Node * temp = head;
//    while (temp != NULL){
//        cout << temp->data << endl;
//        temp = temp->next;
//    }
int a = 10 ;
int b = 20 ;
//if (a < b || b < a){
//    // t and t = true
//    cout <<"hello" << endl;
//}else{
//    cout << "not" << endl;
//}
    return 0 ;
}