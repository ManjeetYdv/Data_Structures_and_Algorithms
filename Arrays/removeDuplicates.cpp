#include<iostream>
using namespace std;

int removeDuplicates(int arr[] , int n){
    
    int maxi =arr[0];

    for(int i= 0;i<n ;i++){
        maxi = max(maxi , arr[i]);
    }

    int count[maxi+1] ={0};


    for(int i= 0; i<n ;i++){
        count[arr[i]]++;

    }
   
   int temp[n];
   int k=0;

   for(int i= 0;i<n ;i++){

       int num=arr[i];
       if(count[num]>=1){
           temp[k++]=arr[i];
           count[num]=0;

       }
   }
   for(int i=0 ;i<k;i++){
       arr[i] = temp[i];
   }

   return k;
}

int main(){
    int arr[]={1,2,2,6,6,6,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicates(arr, n);
    
    for(int i=0 ;i<k; i++){
        cout<<arr[i]<<" ";
    }
}
