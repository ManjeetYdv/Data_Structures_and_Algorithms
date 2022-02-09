#include<iostream>
#include<algorithm>
using namespace std;

void wave(int arr[] , int n){
   
   for(int i=0 ;i< n-1 ;i+=2){

       if(i>0 and arr[i-1]>arr[i]){
           swap(arr[i] , arr[i-1]);
       }
       if(i<n-1 and arr[i]<arr[i+1]){
           swap(arr[i] , arr[i+1]);
       }
   }

} 

int main(){
    int arr[]={2,4,5,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    waves(arr ,n);
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }

}
