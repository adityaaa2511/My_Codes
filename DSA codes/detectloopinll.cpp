#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

bool containsCycle(node *head){
    //Complete this function 
    
    node*slow = head;
    node*fast = head;
    
    while(slow and fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
//Node where cycle starts.(reser slow to head and move both at same pace. The node where they meet is the starting node).if fast reaches end return nullptr.
