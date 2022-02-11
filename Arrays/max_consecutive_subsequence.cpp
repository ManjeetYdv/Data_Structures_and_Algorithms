#include<iostream>
#include<cmath>
using namespace std;

void insertion(int arr[] , int n){
	
	for(int i=1 ;i<n;i++){
		int temp = arr[i];
		int j=i-1;	
	
	while(arr[j]>temp and j>=0){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}
}
int maxConsecutive(int arr[] , int n){
	insertion(arr ,n);
	int count=1;
	int maxima=1;
	for(int i=0 ; i<n-1;i++){
		if(abs(arr[i]-arr[i+1])==1){
			count++;
			maxima = max(maxima , count);
			
		}
		if(abs(arr[i+1]-arr[i])>=2){
			count =1;
		}
		
	}
	return maxima;
	
	
	
}


int main(){
	int arr[]={1,6,7,8,9};
	int n= sizeof(arr)/sizeof(arr[1]);
	
     int x=maxConsecutive(arr , n);
	
	for(int i=0 ; i<n ;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"max consecutive subsequence: "<<x;
}
