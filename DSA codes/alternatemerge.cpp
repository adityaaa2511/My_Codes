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

node* alternateMerge(node * root1, node* root2){
    //Complete this function
    node* head=root1;
    node* temp1=root1;
    node* temp2=root2;
    while(temp1 && temp2){
        if(temp1->next && temp2->next){
            node* tem1=temp1->next;
            node* tem2=temp2->next;
            temp1->next=temp2;
            temp2->next=tem1;
            temp1=tem1;
            temp2=tem2;
            
        }
        else if(temp2->next==NULL){
            node* tem1=temp1->next;
            node* tem2=temp2->next;
            temp2->next=temp1->next;
            temp1->next=temp2;
            temp1=tem1;
            temp2=tem2;
        }
        else if(temp1->next==NULL){
            node* tem1=temp1->next;
            node* tem2=temp2->next;
            temp1->next=temp2;
            temp1=tem1;
            temp2=tem2;
        }
    }
    return head;
}