#include<iostream>
using namespace std;

int count(int arr[] , int n){

	int sum;
	int count=0;
	
	int k;
	
	
	for(int i=0 ; i<n;i++){
		if(arr[i]==0){
			arr[i]=-1;
		}
	}
	
	
	for(int i= 0 ; i<n ; i++){
		  sum=0;
		  k=-1;
		  int x=i;
		  
		for(int  j = x; j<n ;j++){
			sum=sum+arr[j];
			if(sum==0 && j!=k && j!=n ){
				count++;
				k=j;
				x=i;
				
			}
			if(sum==0 && j==n ){
				count++;
				
				break;
			}
	     	if(sum!=0 && j==n ){
		      	
			break;
			}
		}
	
	}
	return count;
	
	
}

int main(){
	
	
    int arr[] =  {0, 0, 1, 1, 0};
	    int n = sizeof(arr) /sizeof(arr[0]);

    cout << "count=";
      cout<< count(arr, n);
	
	
	
}
