// #include<iostream>
// using namespace std;

// class node{

//    public:
//    int data;
//    node* next;

//    node(int val){
//        data= val;
//        next=NULL;
//    }




// };

// void insert_l(node* &head , int val){
    
//    node* temp = head;
//    node* t = new node(val);


//    if(head==NULL){
//        head= t;
//        return;
//    }

//    while(temp->next!=NULL){
//        temp = temp->next;

//    }

//    temp->next= t;



// }

// void display(node* &head){
//     node* temp=head;

//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// node* twoSum(node* head1  , node* head2)
// {
//    node* ptr1 = head1;
//    node* ptr2= head2;
//    node* head=NULL;
//    node* curr= NULL;
//    int carry=0;
  
//    while(ptr1 and ptr2){
     
//      if(head==NULL){
//          int x = ptr1->data + ptr2->data + carry;
//          int val = x%10;
//          carry = x/10;
         
//          node* t = new node(val);
//          head= t;
//          curr=t;

         


//      }

//      else{
//          int x = ptr1->data + ptr2->data + carry;
//          int val = x%10;
//          carry = x/10;
//          node* t = new node(val);

//          curr->next=t;
//          curr= curr->next;
//      }

//      ptr1 = ptr1->next;
//      ptr2 = ptr2->next;
// }
//   while(ptr1){
//       int x = ptr1->data + carry;
//       int val = x%10;
//       carry = x/10;
//        node* t = new node(val);

//        curr->next=t;
//        curr= curr->next;
//        ptr1 = ptr1->next;


//   }

//   while(ptr2){
//       int x = ptr2->data + carry;
//       int val = x%10;
//       carry = x/10;
//        node* t = new node(val);

//        curr->next=t;
//        curr= curr->next;
//        ptr2 = ptr2->next;


//   }

//   while(carry){
//       node* t = new node(carry%10);
//       carry= carry/10;
//       curr->next =t;
//       curr=curr->next;
//   }

//   return head;





// }

// int main(){


//     node* head1 = NULL;
//     insert_l(head1 , 9);
//     insert_l(head1 , 9);
//     display(head1);


//     node* head2= new node(9);
//     insert_l(head2 , 9);
//     insert_l(head2 , 3);
//     display(head2);

//    node* sumtwo = twoSum(head1 , head2);
    
//     display(sumtwo);

// }
