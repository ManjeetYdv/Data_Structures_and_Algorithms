
#include<bits/stdc++.h>
using namespace std;

int * duo(int arr[] , int n , int target){
	
	static int temp[2];
	temp[1]=0;
	temp[0]=0;
	
	sort(arr ,arr+n);
	
	for(int i= 0 ;i< n ;i++){
		
		
		int high = n-1;
		
		while(high>i){
			if(arr[i]+arr[high]==target){
				temp[0]=arr[i];
				temp[1]=arr[high];
				return temp;
				
				
			}
			if((arr[i]+arr[high])>target){
				high--;
				
			}
			else{
				break;
			}
		}
	
		
		
		
		
	}
	
	return temp;	
}
int main(){
	
	int arr[]={2,3,4,5};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	int * sum = duo(arr , n ,5);
	
	cout<<sum[0]<<" "<<sum[1];	
	
	
	
	
	
	
	
	
	
	
}
