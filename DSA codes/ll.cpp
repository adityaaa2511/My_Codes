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

    ~node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

class linkedlist
{
public:
    node *head;
    node *tail;
    void push_front(int data){
        if(head==NULL){
            node* n= new node(data);
            head=tail=n;
        }
        else{
            node* n=new node(data);
            n->next=head;
            head=n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            node* n=new node(data);
            head=tail=n;
        }
        else{
            node* n=new node(data);
            tail->next=n;
            tail=n;
        }
    }
    int print(){
        node* temp=head;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    int search(int key){
        node* temp=head;
        int idx=0;
        while(temp){
            if(temp->data=key){
                return idx;
            }
            idx++;
            temp=temp->next;
        }
        return -1;
    }
    int recursive_search(node* head,int key){
        node* temp=head;
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int subidx=recursive_search(head->next,key);
        if(subidx==-1){
            return -1;
        }
        return subidx+1;
    }
    void Delete(int pos){
        if(pos==1){
            node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            node* prev=NULL;
            node* curr=head;
            int cnt=1;
            while(cnt<=pos){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
    ~linkedlist(){
        if(head!=NULL){
            delete head;
            head=NULL; 
        }
    }
};
