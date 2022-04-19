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

void insert_l(node* &head , int val){                          //insert at last
     
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

void move_last_to_first(node* &head ){
    node* temp = head;
    node* lastPtr;

    while(temp->next->next!=NULL){
        temp = temp->next;
    }

    lastPtr = temp->next;
    temp->next = NULL;
    lastPtr->next = head;
    head= lastPtr;

}

int AddOne(node* &head){
    node* temp = head;
    int num=0;
    
    while(temp!=NULL){

        num = num*10 + temp->data;
        temp =temp->next;

    }
    return num+1;
}
void display(node* head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head = NULL;

    insert_l(head , 1);
    insert_l(head , 2);
    insert_l(head , 3);
    insert_l(head , 4);
    insert_l(head , 5);

    cout<<AddOne(head);

  
    



}
