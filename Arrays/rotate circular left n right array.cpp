#include<iostream>
using namespace std;

int* circularRight(int arr[] , int n){
    
    int* temp =new int[n];
    int x= arr[n-1];
    int z=1;
    temp[0]=x;
    for(int i =0; i<n-1 ; i++){
    	temp[z++]=arr[i];
    	
	}	 	
return temp;	
}


int* circularLeft(int arr[] , int n)
{
    int* temp = new int[n];
    temp[n-1]=arr[0];
    int z =0;
    
    for(int i =1; i<n ; i++){
    	temp[z++]=arr[i];
	}
    
	return temp;
	
}


int main()
{
	int arr[]={2,3,4,5,7};
	int n = 5;

   int *temp = circularRight(arr, 5);

 
	
		for(int i=0 ; i<5; i++){
		cout<<temp[i]<<" ";
		
	}
	cout<<endl;
	
	
	 int *temp2 = circularLeft(arr, 5);

	for(int i=0 ; i<5; i++){
		cout<<temp2[i]<<" ";
		
	}
	cout<<endl;
	
	
	
	
}



