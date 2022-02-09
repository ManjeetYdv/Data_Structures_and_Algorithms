#include<iostream>
#include<climits>
using namespace std;

int maxi(int arr[] , int n){
   
   int maxima=INT_MIN;
   
   for(int i=0 ; i<n;i++){
   	 
   	 int curr_sum= 0;
   	 
   	 for(int j=0 ; j<n;j++){
   	 	
   	 	int index = (i+j)%n;
   	 	curr_sum= curr_sum + j*arr[index];
   	 	
   	 	
		}
   	
   	maxima= max(maxima , curr_sum);
 	
   }	
 return maxima;
 	
}
int main()
{
	int arr[]={3 ,4,5};
	int n=sizeof(arr)/sizeof(arr[1]);
	
	cout<<"Maxi "<<maxi(arr , n);
	
}
