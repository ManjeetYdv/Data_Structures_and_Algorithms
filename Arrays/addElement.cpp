#include<iostream>
using namespace std;

int  addelement(int arr[] , int n , int pos , int x){
	
	n++;
	
	for(int i=n;i>=pos;i--){
		arr[i]=arr[i-1];
		
	}	
	arr[pos-1]=x;
	return n;
	
}

int main(){
	int arr[]={1,3,4,5};
	int n= sizeof(arr)/sizeof(arr[1]);
	
	cout<<"Modified array"<<endl;
	
   n = addelement(arr, n , 1, 2);
	for(int i=0 ; i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	
	
	
	
}
