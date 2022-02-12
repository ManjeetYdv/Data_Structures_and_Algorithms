#include<iostream>
using namespace std;

int partition(int arr[] , int l, int m) 
{
	int pivot = arr[m];
	int i=l-1;
	
	for(int j=l ; j<m ; j++){    //j=L not 1
		if(arr[j]<pivot){
			i++;
			swap(arr[i] , arr[j]);
		}
	}
	swap(arr[i+1] , arr[m]);
	return i+1;	
}


void quickSort(int arr[] , int l  , int m) 
{
	if(l<m){
		
	    int pi = partition(arr ,  l  , m );
		
		quickSort(arr , l , pi-1);
		quickSort(arr , pi+1 ,m );
		
		
	}
		
}
   
   
int main()
{
	int arr[]={2,3,5,6,1};
	int n= sizeof(arr)/sizeof(arr[1]);
	
	quickSort(arr , 0 ,n-1);                            
	
	cout<<"Sorted array : ";
	for(int i=0 ; i<n ;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	
	
	
	
	
	
	
	
}
