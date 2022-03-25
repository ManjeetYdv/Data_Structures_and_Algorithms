#include<iostream>
using namespace std;

class node{
     public:
       int data;
       node* next;

       node(int val){
           data=val;
           next=NULL;
       }



};

void insert_s(node* &head , int val){                           //insert at beginning
       
     node* n = new node(val);
     n->next=head;
     head= n;




}

void insert_l(node* &head , int val){                          //insert at last
     
   node* toInsert = new node(val);

   if(head==NULL){
       head=toInsert;
       return ;
   }

   node* temp= head;

   while(temp->next!=NULL){
       temp = temp->next;
   }

   temp->next = toInsert;


}

void insert_bw(node* &head , int val , int prev){           //insert between function    ....prev will be the position(from 1) of the new node
          
     node* n = new node(val);
     node* temp = head;

     if(prev==1){
       insert_s(head , val);
       return ;
     }
    
    prev--;
    while(temp!=NULL and prev!=1){
        temp= temp->next;
        prev--;
    }

    n->next = temp->next;
    temp->next = n;
     
    




}

bool search(node* head , int key){                //bool search function
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }

        temp= temp->next;
    }
    return false;
}

void display(node* head){                   //display function

    node*temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

void concaticate(node* &head1 , node* &head2){            //concaticate function
    
  node* temp= head1;

  while(temp->next!=NULL){
      temp = temp->next;
  }
  temp->next= head2;


}

node* reverse(node* &head ){               //reverse linked list
   node* prevptr= NULL;
   node* current = head;
   node* nextptr;

   while(current!=NULL){
       nextptr= current->next;
       current->next = prevptr;

       prevptr= current;
       current = nextptr;
   }

   return prevptr; 



}

void delete_n(node* &head , int key){                        //delete a certain node 
     
    node* temp= head;
    node* prev= NULL;


   //if head node itself hold the key itself
    if(temp!=NULL and temp->data==key){
        head= temp->next;
        delete temp;
        return;
    }

    else{
       while(temp!=NULL and temp->data!=key){
         prev = temp;
         temp= temp->next;
       }

        //if key not found
         if(temp==NULL){
             return;
         }
         
         //unlink and delete the key node
         prev->next = temp->next;
         delete temp;
         return ;

       }




    }







int main(){

    node* head = NULL;

   insert_l(head , 1);
   insert_l(head , 2);
   insert_l(head , 3);

//    cout<<"Inserting at tail : " ;
//    display(head);
   
//    cout<<"Inserting at head : ";
//    insert_s(head , -1);
//    display(head);
   
//    cout<<"Inserting 0 at position 2 : ";
//    insert_bw(head , 0 ,2);
//    display(head);

//   node* head1 = NULL;
//   insert_l(head1 , 1);
//   insert_l(head1 ,2);
  
//   node* head2 = NULL;
//   insert_l(head2 , 3);
//   insert_l(head2 , 4);

//   concaticate(head1 , head2);
//    display(head1);


//       head1 = reverse(head1);
//      display(head1);
    
//     display(head);
//     delete_n(head ,3);
//     display(head);

}
