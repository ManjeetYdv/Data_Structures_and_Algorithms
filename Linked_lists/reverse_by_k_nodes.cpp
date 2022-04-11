#include<bits/stdc++.h>
using namespace std;

class node{

    public :
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

void insert_s(node* &head , int val){
    node* n = new node(val);
    n->next = head;
    head= n;

}

void insert_l(node* &head , int val){                         
     
   node* toInsert = new node(val);

   if(head==NULL){
       insert_s(head , val);
        return;  
   }

   node* temp= head;

   while(temp->next!=NULL){
       temp = temp->next;
   }

   temp->next = toInsert;


}

void display(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


node* reverseK(node* head , int k){
    
    node* prev = NULL;
    node* curr = head;
    node* next ;
    int count= 0;

   while(curr!=NULL and count<k){
       next = curr->next;
       curr->next = prev;
       
       prev = curr;
       curr = next;
       count++;
   }

   if(next!=NULL){
       head->next = reverseK(next , k);
   }
   return prev;


}


int main(){
    node* head = NULL;

    insert_l(head , 1);
    insert_l(head , 2);
    insert_l(head , 3);
    insert_l(head , 4);
    insert_l(head , 5);
    insert_l(head , 6);
    insert_l(head , 7);
    insert_l(head , 8);

    head=reverseK(head  , 3);
    display(head);



}
