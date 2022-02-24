#include<bits/stdc++.h>
using namespace std;

struct Node{
	
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data= val;
		right=NULL;
		left=NULL;
	}
	
};

Node* insertBST(Node* root , int val){                        //insertion in BST
	
	if(root==NULL){
		return new Node(val);
	}
	if(val<root->data){
		root->left =insertBST(root->left, val);
	}	
	else{
		root->right=insertBST(root->right , val);
	}
	
	return root;
	
}

Node* searchBST(Node* root , int key){                  //search in BST
	if(root==NULL){
		return NULL;
	}
	
	if(root->data==key){
		return root;
	}
	//data>key
	if(root->data >key){
		return searchBST(root->left , key);
	}
    //data <key
		return  searchBST(root->right , key);
	
}
Node* inorderSucc(Node* root)
{
	Node* curr = root;
	while(curr && curr->left!=NULL){
		curr=curr->left;
	}
	return curr;
	
}
Node* deleteBST(Node* root , int key){                      // deletion in BST
	
	if(key<root->data){
		root->left = deleteBST(root->left , key);
	}
    else if(key > root->data){
		root->right = deleteBST(root->right, key);
	}
	else{
		if(root->left==NULL){
			Node* temp = root->right;
			free(root);
			return temp;
			
		}
		else if(root->right==NULL){
		    Node* temp = root->left;
			free(root);
			return temp;
		}
		
		Node* temp = inorderSucc(root->right);
		root->data = temp->data;
		root->right =deleteBST(root->right , temp->data)	;
		
		}
	
	return root;
		
}


int heightBST(Node* root){                                  // height of the BST
	
	if(root==NULL){
		return 0;
	}
	
	int lHeight = heightBST(root->left);
	int rHeight= heightBST(root->right);
	return max(lHeight ,rHeight)+1;
	
	
	
	
}


void preorder( Node* root){                              //preorder traversal
	
	if(root==NULL){
		return;
	}
    cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
		
}

void inorder(Node* root){                            //inorder traversal
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(Node* root){                           //postorder traversal
	if(root==NULL){
		return;
		
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
	
}
void printLevelOrder(Node* root){                     //level order traversal
	if(root==NULL){
		return;
	}
	
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* node =q.front();
		q.pop();
		if(node!=NULL){
			cout<<node->data<<" ";
			if(node->left!=NULL){
				q.push(node->left);
			}
			if(node->right!=NULL){
				q.push(node->right);
			}
			
			else if(!q.empty()){
				q.push(NULL);
			}
		}
	}
	
}
Node* replaceBST(Node* root , int prev , int val){
	
    deleteBST(root , prev);
	insertBST( root , val);
	return root;
	
}
int main(){
	
 	Node* root=NULL;
	root=insertBST(root , 5);	
	insertBST(root , 1);	
	insertBST(root , 3);	
	insertBST(root , 4);	
	insertBST(root , 2);	
	insertBST(root , 7);	
	
	cout<<"Preorder traversal of BST :";
   	preorder(root);
	cout<<endl;
	
	cout<<"Inorder traversal of BST :";
   	inorder(root);
	cout<<endl;
	
    cout<<"Postorder traversal of BST :";
   	postorder(root);
	cout<<endl;
	
	
	
	if(searchBST(root , 4)==NULL){
		cout<<"key doesnt exists"<<endl;
	}
	else{
		cout<<"key exists"<<endl;
	}
	cout<<"Height of BST: "<<heightBST(root)<<endl;
	
	cout<<"Inorder traversal of  BST after Deleting 7 : ";
	root= deleteBST(root , 7);
	inorder(root);
	cout<<endl;
	
	cout<<"Level order traversal of BST: ";
	printLevelOrder(root);
	cout<<endl;
	
	cout<<"BST inorder after replacing 1 by 10 : ";
	root= replaceBST(root , 1 , 10);
	inorder(root);
	
}
