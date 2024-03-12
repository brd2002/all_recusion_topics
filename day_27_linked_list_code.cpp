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
        temp1 = temp1->next;
    }
    return newHead;
}
// with out extraspace
Node *removeDuplicates(Node *head)
{
    // your code goes here
    if (head == NULL) {
        return head;
    }
    if (head->next == NULL){
        return head;
    }
    Node *prev = head;
    Node *curr = head->next;
    while (curr){
        if (prev->data == curr->data){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }else{
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;

}

int main()
{
    Node *head = NULL;

    return 0;
}