#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
Node *removeDuplicates(Node *head)
{
    // your code goes here
    vector<int>store_all_elements;
    Node *temp = head;
    while (temp!=NULL){
        store_all_elements.push_back(temp->data);
        temp = temp->next;
    }
    set<int>s;
    for (auto x : store_all_elements){
        s.insert(x);
    }
    head = NULL ;
    Node *curr ;
    for (auto it : s){
        if (head == NULL){
            head = new Node(it);
            curr = head;
        }else {
            Node *temp1 = new Node (it);
            temp1->prev = curr;
            curr->next = temp1;
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