#include<iostream>
#include<climits>
using namespace std;

int firstNonRepeating(int arr[] , int n){
	
	int max=INT_MIN;
	for(int i=0 ; i<n ; i++){
		if(arr[i]>max){
			max= arr[i];
			
		}
	}
	
	int temp[max+1];
	for(int i=0 ; i<max+1 ; i++){
		temp[i]=0;
		
	}
	
	for(int i=0 ; i<n;i++){
		int num = arr[i];
		temp[num]++;
		
	}
	
	for(int i=0 ; i<n ;i++){
		int num = arr[i];
		if(temp[num]==1){
			return num;
			
		}
	}
    return -1;
}

int main(){
	
	int arr[]={3,3,3,1};
	int n= sizeof(arr)/sizeof(arr[1]);
	int repeat1 = firstNonRepeating(arr , n);
	if(repeat1==-1){
		cout<<"All repeated "<<endl;
	}
	else
	cout<<"First non repeating element : "<<repeat1;
	
	
	
	
	
	
	
	
	
	
}
