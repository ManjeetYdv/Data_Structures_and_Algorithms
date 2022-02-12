#include<iostream>
using namespace std;

void Sort(int arr[] , int n){
	
	for(int i=0 ; i<n-1; i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i] , arr[i+1]);
			
		      	// updating the value of j = -1
            // so after getting updated for j++
            // in the loop it becomes 0 and
            // the loop begins from the start.
			i=-1;                             
		}
		
	}
	
}
int main(){
	 int arr[] = { 1, 2, 99, 9, 8,
                7, 6, 0, 5, 4, 3 };
    int n= sizeof(arr)/sizeof(arr[1]);
    Sort(arr , n);
    
    for(int i=0 ;i<n ;i++){
    	cout<<arr[i]<<" ";
	}
}
