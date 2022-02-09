#include<iostream>
using namespace std;

int peakElement(int arr[] , int size){
	
	if(size==1){
		return 0;
	}
	
	for(int i=1; i<size ; i++){
		
		if(arr[i]>arr[i+1]&& arr[i]>arr[i-1] &&i<size-2 || arr[i]>arr[i-1] &&i==size-1){
		return i;
	}
		if(i==1){
			if(arr[i-1]>arr[i]){
				return 0;
	}	
	
		}
				
		
	}
	
	
	
}
int main(){
	
    int n ;
    cout<<"Enter number of elements in array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements : "<<endl;
    
    for(int i= 0;i<n ;i++){
    	cin>>arr[i];
	}
	
	int peak= peakElement(arr , n);
	cout<<"index of peak element: "<<peak;
	
	
	
	
	
}
