
#include<iostream>
#include<climits>
using namespace std;


void CountSort(int arr[] ,int n){
	
	int max =INT_MIN;
	
	for(int i=0 ; i<n ;i++){
		if(arr[i]>max){
			max = arr[i];
		}	
	}
	
	int count[max+1];
	
	for(int i=0 ;i<max+1 ;i++){
		count[i]=0;
	}
	
	for(int i=0 ;i<n ;i++){
		count[arr[i]]++;
		
	}
	
	for(int i =1 ; i<max+1 ; i++){
		count[i]=count[i]+ count[i-1];
		
	}
	
	int sorted[n];
	
	for(int i= n-1 ;i>=0 ;i--){
//		int num = count[arr[i]];
//		sorted[num-1]=arr[i];
//		count[arr[i]]--;

		
		sorted[--count[arr[i]]]=arr[i];
		
	}
	
	for(int i= 0;i<n ;i++){
		arr[i]=sorted[i];
	}
		
}
int main(){
	
	int arr[]={2,3,5,6,1};
	int n= sizeof(arr)/sizeof(arr[1]);
	
	CountSort(arr , n);                     
	
	cout<<"Sorted array : ";
	for(int i=0 ; i<n ;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
