#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int kthlastelementfromlast(node *head, int k) //K IS LESS THAN EQUAL TO LENGTH.
{
    node *fast = head;
    node *slow = head;
    int cnt = 0;
    while (cnt < k)
    {
        fast = fast->next;
        cnt++;
    }
    while(fast){
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;
}
