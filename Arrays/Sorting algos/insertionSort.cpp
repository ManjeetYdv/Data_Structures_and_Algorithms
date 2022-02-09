#include<iostream>

using namespace std;


void insertion(int arr[] ,int n){
	
	
	for(int i=1 ; i<n ; i++){
		int j=i-1;
		int temp=arr[i];
		
		while(arr[j]>temp && j>=0){
			arr[j+1]=arr[j];
			
			j--;
			
		}
		arr[j+1]=temp;
		
		
		
	}
		
}
int main(){
	
	
	int arr[]={3,4,5,5,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	insertion(arr , n);
	
	for(int i= 0;i<n ;i++){
		cout<<arr[i]<<" ";
	}



}
