#include <bits/stdc++.h>
using namespace std;

class Node{
	
	public:
		int data;
		Node* next;
		
	
	
	
};
													
													//insert at beginning

void insert_s(Node** head_ref , int new_data){    

   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next= *head_ref;
  *head_ref = new_node;

}


void insert_l(Node** head_ref , int new_num){                                    //Insert at last
	
	Node* new_node= new Node();
    new_node->data=new_num;
    new_node->next=NULL;
    
    if(*head_ref==NULL){
  	*head_ref=new_node;
  	return;
  }

    Node* temp=*head_ref;
   
  
  while(temp->next!=NULL){
  	temp=temp->next;
  }
  temp->next=new_node;
  
}
 
void insert_bw(Node** head , int prev , int newData){     					//inserting at a certain position    
																			//  ...prev is the position where the node will be added
																			
	Node*temp=*head;
	Node* bw = new Node();
	bw->data=newData;
	bw->next=NULL;
	
	if(prev==1){
		bw->next=*head;
		*head = bw;
	
		
		
	}
	else{
	
	prev--;
	while(temp!=NULL && prev!=1){
		temp=temp->next;
		prev--;
	}
	bw->next=temp->next;
	temp->next=bw;
}
	return;
}
 
void delete_n(Node** head, int key){                                  //deleting a certain node
	
	Node* temp=*head;
	Node* prev = NULL;
	
	// If head node itself holds
   // the key to be deleted
	if(temp!=NULL && temp->data==key){
		
		*head = temp->next;
		delete temp;
		return;
		
	}

	else{
	
	while(temp!=NULL && temp->data!=key){
		prev=temp;
		temp=temp->next;
	
	}
	//if key not found
	if(temp==NULL){
		return;
	}
	// Unlink the node from linked list
	prev->next =temp->next;
	delete temp;
	
}
	

	
}
 



bool search(Node*head , int key){                    //bool search function
	Node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
					
			return true;
		}
		temp=temp->next;
		
	}
	
	return false;
	
}


void display(Node* node){                                 //display function 
	
	while(node!=NULL){
		cout<<" "<<node->data;
		node = node->next;
	}
	
cout<<endl;	
}

void contanicate(Node*head1 , Node*head2){                                             //concatinate two lists
	Node* temp1=head1;
	Node* temp2=head2;
	
	while(temp1->next!=NULL){
		temp1=temp1->next;
		
	}
	temp1->next=temp2;
	

}

Node* reverse(Node* head){											//reverse function
	
	Node*prevptr=NULL;
	Node*current=head;
	Node*nextptr;
	
	while(current!=NULL){
		nextptr=current->next;
		current->next=prevptr;
		
		prevptr=current;
		current=nextptr;
		
	}
		return prevptr;
		
	
		
}


Node* reverseRecurssive(Node* head){                                //reversing using recurssion
	if(head==NULL || head->next==NULL){
		return head;
		
	}
	
	Node* newhead= reverseRecurssive(head->next);
	head->next->next=head;
	head->next=NULL;
	
	return newhead;
	
	
	
	
	
	
}

void removeDuplicates(Node* start)                            //remove duplicants from unsorted lists
{
    Node *ptr1, *ptr2;
    ptr1 = start;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) {
                /* sequence of steps is important here */
                ptr2->next = ptr2->next->next;
               
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}


 
void RemoveDuplicates(Node* root)   {                                    //remove duplicants from sorted lists
		
		Node* head=root;
		
		if(head==NULL){
			return ;
		}
		else{
			while(head->next!=NULL){
				if(head->data==head->next->data){
		     	 head->next = head->next->next;
			} 
				else{
					head=head->next;
				}
			}
				
		}
  
}
	

	Node* searchl(Node*head , int key){                    //bool search function
	Node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
					
			return temp;
		}
		temp=temp->next;
		
	}
	
	
	
}

	

int main(){
	
//
//	Node* head = NULL;
//	
//	insert_s(&head , 6);
//	insert_s(&head , 7);
//    insert_l(&head,9);
//	display(head);
//	cout<<search(head,7);
//	cout<<endl;
//
//	
//	delete_n(&head , 7);
//	display(head);
//	
//
//
//   Node*head2 = NULL;
//   
//     insert_l(&head2,10);
//      insert_l(&head2,11);
//	   insert_l(&head2,12);
//	   display(head2);
//	   
//	   contanicate(head , head2);
//	   display(head);
//	  
//
//	
//	Node*head3=NULL;
//     insert_l(&head3,77);
//      insert_l(&head3,88);
//	   insert_l(&head3,99);
//     	insert_bw(&head3 , 2 , 6);
//	 	display(head3);
//	 	
//	 	
//	 	head3=reverse(head3);
//	 	display(head3);
//	 	
//	   head2=reverseRecurssive(head2);
//	   display(head2);
//	   
//	   
//	   Node* head4=NULL;
//	   insert_l(&head4,77);
//      insert_l(&head4,88);
//	   insert_l(&head4,88);
//	     
//	  removeDuplicates(head4);
//	   display(head4);
	 
	 Node* sol =NULL;
	insert_l(&sol , 4);
	insert_l(&sol , 5);
	 cout<<"Linked list : ";
	 display(sol);  
	 
	 cout<<"Inserting '1' at the beginning  "<<endl;
	 cout<<"Linked list : ";
	 insert_s(&sol , 1);
	 display(sol);
	   
	cout<<"Inserting '2' at position 2 "<<endl;
	insert_bw(&sol , 2 , 2);
    cout<<"Linked list : ";
    display(sol);
    
    cout<<"Deleting the first element "<<endl;
    delete_n(&sol ,1);
    cout<<"Linked list : ";
    display(sol);
    
    cout<<"Deleting elements at pos 2"<<endl;
    delete_n(&sol ,4);
    cout<<"Linked list : ";
    display(sol);
    
    cout<<"Searching and returning the pointer of element '2'"<<endl;
    cout<<searchl(sol , 5);
    
    Node* sol2 = NULL;
    insert_l(&sol2 , 4);
    insert_l(&sol2 , 4);
    insert_l(&sol2 , 4);
   	insert_l(&sol2 , 4);
   	insert_l(&sol2 , 4);
   	cout<<endl;
   	cout<<"Linked list 2 : ";
   	display(sol2);
   	cout<<"Concatinating the 2 linked lists:  ";
   	contanicate(sol , sol2);
   	display(sol);
    					
    
}

