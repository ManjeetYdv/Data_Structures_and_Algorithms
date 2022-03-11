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
     node *ptr1 ,*ptr2;
     ptr1= head;

     while(ptr1->next!=NULL){

          ptr2 = ptr1;

          while(ptr2->next!=NULL){

             if(ptr1->data == ptr2->next->data){
                 ptr2->next = ptr2->next->next;
             }
             else{
                 ptr2 =ptr2->next;
             }
              
     }


            ptr1 =ptr1->next;
           




     }




}






int main(){
    
    node* head = NULL;
    insert_l(head , 1);
    insert_l(head , 2);
    insert_l(head , 1);
    insert_l(head , 3);
    insert_l(head , 4);
    insert_l(head , 3);
    
    cout<<"list : ";
    display(head);
    
    removeDuplicants(head);
    cout<<"After removing duplicants : ";
    display(head);


}
