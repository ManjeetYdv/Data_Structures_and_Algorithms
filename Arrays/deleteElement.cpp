#include<iostream>
using namespace std;

int deleteelement(int arr[] ,int n , int x){
	int i;
	for(i=0 ; i<n;i++){
	
	    if(arr[i]==x)
		break;
}
		
		if(i<n){
			n=n-1;
			
			for(int j=i;j<n;j++)
				arr[j]=arr[j+1];
				
			}	
	return n;
}



int main(){
	int arr[]={2,3,4,5,6,7};
	int n= sizeof(arr)/sizeof(arr[0]);

	int p=deleteelement(arr, n,6);
	cout<<"Modified array :"<<endl;
	for(int i=0;i<p;i++){
		cout<<arr[i]<<" ";
		
	}
	
	
}
