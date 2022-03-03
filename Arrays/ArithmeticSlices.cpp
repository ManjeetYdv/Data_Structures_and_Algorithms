#include<iostream>
using namespace std;

int numberOfArithmeticSlices(int arr[] , int n ){

     if(nums.size()<3){
            return 0;
      }
        
   int count= 0;

   for(int i=0 ;i<n-2;i++){
       
       int diff = arr[i+1]-arr[i];

       for(int j=i+2 ;j<n ;j++){
           if(arr[j] - arr[j-1]==diff){
               count++;
           }
           else{
               break;
           }
       }
   }

   return count;
}

int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Number of arithmetic slices: "<<numberOfArithmeticSlices(arr , n);
}
