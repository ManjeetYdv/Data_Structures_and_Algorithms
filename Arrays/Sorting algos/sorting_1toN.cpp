#include<iostream>
using namespace std;


 
void sort(int arr[] , int n){
	
	
	
	for(int i=0 ; i<n;){
		
		if(arr[i]==i+1){
			i++;
		}
		else{
			swap(arr[i] , arr[arr[i]-1]);
		}
	}
		
}
int main(){
	int arr[]={3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr , n);
	for(int i=0 ; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
