
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[] , int n){
	
	for(int i =0 ;i<n-1 ;i++)	{
		
		int min=i ;
		for(int j=i+1 ;j<n ;j++){
			if(arr[j]<arr[min]){
				min =j;
			}
		}
		
		if(min!=i){
			swap(arr[i] ,arr[min]);
		}
		
	}
	
	
}

int main(){
	int arr[]={5,4,3,1,3};
	int n = sizeof(arr)/sizeof(arr[1]);
	
	selectionSort(arr , n);
	for(int i =0; i<n ;i++){
		cout<<arr[i]<<" ";
	}
	
}
