#include<bits/stdc++.h>
using namespace std;

class node{
   public :
   int data;
   node* next;

   node(int val){
       data = val;
       next=NULL;
   }
};

void insert_l(node* &head , int val){     //insert atlast function
    
    node* res = new node(val);
    node* temp = head;

    if(head==NULL){
        res->next = head;
        head= res;
        return;
    }

    while(temp->next!=NULL){
        temp = temp->next;

    }

    temp->next= res;

}


void display(node* head){               //display function
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}



void createCycle(node* head , int pos) {          //create Cycle function
     node* temp = head;
     node* res;

     int count=1;

     while(temp->next!=NULL){

         if(count==pos){
             res = temp;
         }
         count++;
         temp = temp->next;


     }
     temp->next = res;

} 


bool hasLoop(node* head){                       // return true is list has a loop else returns false

    node* fast = head;
    node* slow = head;

    while(fast!=NULL and fast->next!=NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            return true;
        }

    }
    return false;
}

void deleteLoop(node* head){                    //delete the loop
    
    if(hasLoop(head)==0){
        cout<<"There is no loop"<<endl;
        return;
    }
    node* fast = head;
    node* slow = head;

   do{
       slow = slow->next;
       fast = fast->next->next;

   }while(fast!=slow);

   fast = head;

   while(fast->next!=slow->next){
       slow = slow->next;
       fast = fast->next;
   }
   slow->next=NULL;

}

node* loopStarter(node* head){                  //returns the staring node of the loop

    node* fast=head;
    node* slow =head;

    do{
        fast = fast->next->next;
        slow = slow->next;
    }while(fast!=slow);

    fast=head;

    while(fast->next!=slow->next){
        fast = fast->next;
        slow = slow->next;
    }

    return slow->next;


}
int main(){
    node* head=NULL;

    insert_l(head ,1 );
    insert_l(head ,2 );
    insert_l(head ,3 );
    insert_l(head ,4 );
    insert_l(head ,5 );
    insert_l(head ,6 );   
    insert_l(head ,7 );
    insert_l(head ,8 );
    insert_l(head ,9 );

    display(head);

    createCycle(head , 2);
    cout<<hasLoop(head)<<endl;

    node* res = loopStarter(head);
    cout<<res->data<<endl;

    deleteLoop(head);
    cout<<hasLoop(head)<<endl;


    

}
