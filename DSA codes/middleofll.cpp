#include <bits./stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
// left
int getMiddle(Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}
//right
int getMiddle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}