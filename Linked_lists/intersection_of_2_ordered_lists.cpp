#include<iostream>
using namespace std;
class Node{
	
	public:
		int data;
		Node* next;
		
	Node(int val){
		data = val;
		next = NULL;
	}
	
	
};
void insert_l(Node** head_ref , int new_num){                                    //Insert at last
	
	Node* new_node= new Node(new_num);
   
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
Node* findIntersection(Node* head1  , Node* head2){
	
	Node* ptr1 =head1;
	Node* ptr2 =head2;
	Node*head=NULL;
	Node* cur=NULL;
	
	while(ptr1 and ptr2){
		
		if(ptr1->data == ptr2->data){
			if(head==NULL){
				Node* t = new Node(ptr1->data);
				head=t;
				cur =t;
			}
			else{
				Node* t = new Node(ptr1->data);
				cur->next =t;
				cur=cur->next;
				}
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
		}
			else{ 
				
				if(ptr1->data < ptr2->data){
					ptr1 = ptr1->next;
				}
				else{
					ptr2 =ptr2->next;
				}
			}
		
		
		
		
	}
	
	return head;
	
	
}
void display(Node* node){                                 //display function 
	
	while(node!=NULL){
		cout<<" "<<node->data;
		node = node->next;
	}
	
cout<<endl;	
}
    int main(){
	
	
	Node* ls1 = NULL;
	Node* ls2 = NULL;
	
	insert_l(&ls1 , 1);
	insert_l(&ls1 , 2);
	insert_l(&ls1 , 3);
	insert_l(&ls1 , 4);
	insert_l(&ls1 ,5);
	
	
	insert_l(&ls2 , 3);
	insert_l(&ls2 , 4);
	insert_l(&ls2 , 5);
	insert_l(&ls2 , 6);
	
	Node* intersection= findIntersection(ls1 , ls2);
	
	
	
	cout<<"Linked list 1 : ";
	display(ls1);
	cout<<"Linked list 2 : ";
	display(ls2);
	cout<<"Intersection of the two lists : ";
	
	display(intersection);
	
	
	
	
	
	
	
	
	
}
