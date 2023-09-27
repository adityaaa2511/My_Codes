#include<iostream>
using namespace std;

struct ListNode{

	int data;
	ListNode* next;

	ListNode(int val){

		data = val;
		next = NULL;
	}
};

void printLL(ListNode* head){

	ListNode* temp = head;
	while(temp){

		cout<<temp->data<<" —> ";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

void insertAtEnd(ListNode* &tail, int data){

	ListNode* newNode = new ListNode(data);
	tail->next = newNode;
	tail = newNode;
}

// 2. Two-pointer - In one pass ? O(N) : O(1)
ListNode* removeNthFromEnd(ListNode* head, int n){

	ListNode* dummy = new ListNode(0);
	dummy->next = head;

	ListNode *fast, *slow;
	fast = slow = dummy;

	while(n--){

		fast = fast->next;
	}

	while(fast->next){

		slow = slow->next;
		fast = fast->next;
	}

	if(slow->next == head){

		ListNode* delNode = slow->next;
		head = head->next;
		delete(delNode);
		return head;
	}

	ListNode* delNode = slow->next;
	slow->next = delNode->next;
	delete(delNode);

	return head;
}

int main(){

	ListNode* head = new ListNode(10);
	ListNode* tail = head;

	insertAtEnd(tail, 20);
	insertAtEnd(tail, 30);
	insertAtEnd(tail, 40);
	insertAtEnd(tail, 50);

	printLL(head);

	ListNode* removed = removeNthFromEnd(head, 2);

	printLL(removed);

	return 0;
}
