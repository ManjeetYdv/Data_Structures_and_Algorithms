#include<iostream>
using namespace std;

void unique(int arr[] , int n){
	
	int max=arr[0];
	
	for(int i=0 ; i<n ;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	
	int temp[max+1];
	
	for(int i=0 ; i<max+1 ; i++){
		temp[i]=0;
	}
	
	for(int i=0 ; i<n; i++){
		int num=arr[i];
		temp[num]++;
	}
	
	for(int i=0 ; i<n ;i++){
		if(temp[arr[i]]==1){
			cout<<arr[i]<<" ";
		}
		
}
	
}

int main(){
	int arr[]={2,2,3,4,5,8,3};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<<"All non duplicants : ";
	unique(arr ,n);
}
