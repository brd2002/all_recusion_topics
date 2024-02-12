#include <bits/stdc++.h>
using namespace std;
int *solve()
{
    int a = 5;
    int *b = &a;
    return b;
}
int count(ListNode *head)
{
    int count = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int len = count(head);
ListNode *temp = head;
ListNode *prev = NULL;

len = len - n;
if (len == 0)
{
    temp = head;
    head = temp->next;
    delete temp;
    return head;
}
// len--;
while (len--)
{
    prev = temp;
    temp = temp->next;
}
if (prev->next != NULL)
    prev->next = temp->next;
// temp->next = temp1->next;
delete temp;
return head;
int main()
{
    // cout << *solve() << endl;
    // string s = "hello";
    // int a = 10;
    // cout << s.length() << endl;
    // cout << max(s.length(), a) << endl;
    string s = "bharat";
    string b = "bh";
    size_t index = s.find(b);
    cout << index;
    return 0;
}