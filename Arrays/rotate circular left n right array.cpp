#include<iostream>
using namespace std;


void rotateRight(int arr[] , int n){

    int p = arr[n-1];
    
    int j= arr[0];
    
    for(int i=1 ;i<n ;i++){
        int temp= arr[i];
        arr[i]=j;
        j= temp;
        
        
    }
    arr[0]=p;
}

void rotateLeft(int arr[] , int n){

  int p= arr[0];
  int j=arr[n-1];
  
  for(int i=n-2 ;i>=0 ;i--){
      int temp = arr[i];
      arr[i]=j;
      j= temp;
  }
   arr[n-1]=p;


}

int main(){

    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    rotateRight(arr , n);
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}
