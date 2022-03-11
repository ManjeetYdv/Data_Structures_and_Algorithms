#include<iostream>
using namespace std;


class node{
  public:
   int data;
   node* next;

   node(int val){
       data=val;
       next =NULL;
   }




};

void insert_l(node* &head , int val){


      node* n = new node(val);
      node* temp=head;

      if(head==NULL){
          head=n;
          return;
      }

      while(temp->next!=NULL){
          temp = temp->next;

      }
      temp->next =n;



}

void display(node* head){
    
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
        cout<<endl;

}

void removeDuplicants(node* head){
    node* temp= head;
    
    if(head==NULL){
        return;
    }

    while(temp->next!=NULL){
        if(temp->data == temp->next->data){

            temp->next = temp->next->next;
          
        }

        else{
            temp=temp->next;
        }

    }

}
    

int main(){
    
     node* head1= NULL;

     insert_l(head1 , 1);
     insert_l(head1 , 1);
     insert_l(head1 ,3 );
     insert_l(head1 , 3);
     insert_l(head1 , 4);
     cout<<"List: ";
     display(head1);

     removeDuplicants(head1);
     cout<<"Lists after removing duplicates: ";
     display(head1);

}
