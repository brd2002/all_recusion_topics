#include <bits/stdc++.h>
using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };
// Node *removeDuplicates(Node *head)
// {
//     // your code goes here
//     vector<int>store_all_elements;
//     Node *temp = head;
//     while (temp!=NULL){
//         store_all_elements.push_back(temp->data);
//         temp = temp->next;
//     }
//     set<int>s;
//     for (auto x : store_all_elements){
//         s.insert(x);
//     }
//     head = NULL ;
//     Node *curr ;
//     for (auto it : s){
//         if (head == NULL){
//             head = new Node(it);
//             curr = head;
//         }else {
//             Node *temp1 = new Node (it);
//             temp1->prev = curr;
//             curr->next = temp1;
//             curr = curr->next;
//         }
//     }
//     return head;
// }
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    Node *newHead = NULL;
    Node *nextNode;
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data >= temp2->data)
        {
            if (newHead == NULL)
            {
                newHead = new Node(temp2->data);
                nextNode = newHead;
            }
            else
            {
                Node *temp = new Node(temp2->data);
                nextNode->next = temp;
                nextNode = nextNode->next;
            }
            temp2 = temp2->next;
        }
        else
        {
            if (newHead == NULL)
            {
                newHead = new Node(temp1->data);
                nextNode = newHead;
            }
            else
            {
                Node *temp = new Node(temp1->data);
                nextNode->next = temp;
                nextNode = nextNode->next;
            }
            temp1 = temp1->next;
        }
    }
    while (temp1 != NULL)
    {
        if (newHead == NULL)
        {
            newHead = new Node(temp1->data);
            nextNode = newHead;
        }
        else
        {
            Node *temp = new Node(temp1->data);
            nextNode->next = temp;
            nextNode = nextNode->next;
        }
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        if (newHead == NULL)
        {
            newHead = new Node(temp2->data);
            nextNode = newHead;
        }
        else
        {
            Node *temp = new Node(temp2->data);
            nextNode->next = temp;
            nextNode = nextNode->next;
        }
        temp2 = temp2->next;
    }
    return newHead;
}
// with out extraspace
Node *removeDuplicates(Node *head)
{
    // your code goes here
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }
    Node *prev = head;
    Node *curr = head->next;
    while (curr)
    {
        if (prev->data == curr->data)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}
// Node *segregate(Node *head)
// {

//     // Add code here
//     int count_0 = 0, count_1 = 0, count_2 = 0;
//     Node *curr = head;
//     while (curr)
//     {
//         if (curr->data == 0)
//             count_0++;
//         else if (curr->data == 1) count_1++;
//         else count_2++;
//         curr = curr->next;
//     }
//     head = NULL;
//     Node *temp ;
//     while (count_0--){
//         if (head==NULL){
//             head = new Node (0);
//             temp = head;
//         }else {
//             Node *temp1 = new Node (0);
//             temp->next = temp1;
//             temp = temp->next ; 
//         }
//     }
//      while (count_1--){
//         if (head==NULL){
//             head = new Node (1);
//             temp = head;
//         }else {
//             Node *temp1 = new Node (1);
//             temp->next = temp1;
//             temp = temp->next ; 
//         }
//     }
//      while (count_2--){
//         if (head==NULL){
//             head = new Node (2);
//             temp = head;
//         }else {
//             Node *temp1 = new Node (2);
//             temp->next = temp1;
//             temp = temp->next ; 
//         }
//     }
//     return head;
// }
Node* segregate(Node *head) {
        
        // Add code here
        Node * head_1 = NULL ;
        Node * temp_1 ;
        Node * head_2 = NULL;
        Node * temp_2 ;
        Node * head_0 = NULL;
        Node * temp_0 ;
        Node *curr = head;
        while (curr){
            if (curr->data == 0){
                if (head_0 == NULL){
                    head_0 = new Node (0);
                    temp_0 = head_0;
                }else {
                    Node *temp = new Node (0);
                    temp_0->next = temp;
                    temp_0 = temp_0->next ;
                }
            }else if (curr->data == 1){
                 if (head_1== NULL){
                    head_1 =  new Node (1);
                    temp_1 =  head_1;
                }else {
                    Node *temp = new Node (1);
                    temp_1->next = temp;
                    temp_1 = temp_1->next ;
                }
            }else {
                if (head_2== NULL){
                    head_2 =  new Node (2);
                    temp_2 =  head_2;
                }else {
                    Node *temp = new Node (2);
                    temp_2->next = temp;
                    temp_2 = temp_2->next ;
                }
            }
            curr = curr->next;
        }
        Node * newHead ;
        if (head_0 == NULL){
            if (head_1 == NULL){
                if (head_2==NULL){
                    return NULL ;
                }else {
                    newHead = head_2;
                }
            }else {
                if (head_2 == NULL){
                    newHead = head_1;
                }else {
                    temp_1->next = head_2;
                    newHead = head_1;
                }
            }
        }else {
            if (head_1 == NULL){
                if (head_2 == NULL){
                    newHead = head_0;
                }else {
                    temp_0->next = head_2;
                    newHead = head_0;
                }
            }else {
                if (head_2 == NULL){
                    temp_0->next = head_1;
                    newHead = head_0;
                }else {
                    temp_0->next = head_1;
                    temp_1->next = head_2 ;
                    newHead = head_0;
                }
            }
        }
        return newHead;
    }
int main()
{
    Node *head = NULL;

    return 0;
}