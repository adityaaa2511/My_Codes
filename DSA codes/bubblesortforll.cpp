#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 
int len(node* head)
{
    node* temp = head ;
    int cnt = 0 ;
     while(temp!=NULL)
     {
         cnt++;
         temp=temp->next ;
     }
    
    return cnt ;
}
node* bubble_sort_LinkedList_itr(node* head)
{
    // your code goes here
    int n = len(head)-1;
  
   while(n--)
 
   {
       node* prev =NULL;
    node*cur = head;
    while(cur->next!=NULL)
    {
        if(cur->data >=cur->next->data)
        {
            
            if(prev==NULL)
            {
                //first node
                node* nxt = cur->next ;
                cur->next = nxt->next ;
                nxt->next = cur ;
               prev=nxt ;
                head = prev ;
               
                
            }
            
            else
            {
                
                node* nxt = cur->next ;
                prev->next = nxt ;
                cur->next = nxt->next ;
                nxt->next = cur ;
                prev = nxt ;
              
                
            }
            
        }
        else
        {
           
             prev = cur ; 
            cur=cur->next ;
           
        }
        
        
    
    }
       
   }
   
    
    
    return head ;
    
}