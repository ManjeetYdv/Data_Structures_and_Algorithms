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
	int key=-1;
	for(int i=0 ; i<n ;i++){
		if(temp[arr[i]]>=2){
			cout<<arr[i]<<" ";
		    temp[arr[i]]=0;
		}
		
}
	
}

int main(){
	int arr[]={2,2,2,5,6,7,7,2,2,2,2 ,9 };                   
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<<"All duplicants : ";
	unique(arr ,n);
}
