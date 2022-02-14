#include<iostream>
using namespace std;

int maxSubArr(int arr[] , int n){
	
	int max_ending=1;
	int min_ending=1;
	int highest =1;
	
	for(int i=0 ; i<n ;i++){
		
		if(arr[i]>0){
			max_ending = max_ending*arr[i];
			
			min_ending= min(min_ending*arr[i] , 1);
			
			if(max_ending>highest){
				highest = max_ending;
				
			}
			
			
	}
		if(arr[i]<0){
			int temp = max_ending;
			
	    	 max_ending =max(min_ending*arr[i], 1 );
		
		     min_ending = temp*arr[i];
		     
		     if(max_ending>highest){
				highest = max_ending;
				
			}
		    	
		}
		 if(arr[i]==0){
		 	
         min_ending= 1;	 
		 max_ending= 1;
		 
		 if(max_ending>highest){
			highest = max_ending;
				
			}
		 		 	
		 	
		 	
		 }
		
	}
	
	return highest;
	
}
int main(){
	int arr[]={-9 , -9 , 10, -9 , -9 };
	int n= sizeof(arr)/sizeof(arr[0]);
	
	int max = maxSubArr(arr , n );
	
	cout<<"Max Sub array product : "<<max;	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
