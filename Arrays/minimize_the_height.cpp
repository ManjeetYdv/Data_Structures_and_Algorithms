#include<bits/stdc++.h>
using namespace std;

int minimizetheHeight_I(int arr[] , int n , int k){ // height can be negative
 
 int ans= arr[n-1]-arr[0];

 int smallest = arr[0]+k;
 int largest = arr[n-1]-k;

 int ma , mi;

 for(int i=0 ;i<n-1; i++){

     mi = min(smallest , arr[i+1]-k);
     ma = max(largest , arr[i]+k);

     if(mi<0) continue;

     ans= min(ans , ma-mi);
 }

   return ans;
}
int minimizetheHeight_II(int arr[] , int n , int k){ //height cant be negative

 int ans= arr[n-1]-arr[0];

 int smallest = arr[0]+k;
 int largest = arr[n-1]-k;

 int ma , mi;

 for(int i=0 ;i<n-1; i++){

     mi = min(smallest , arr[i+1]-k);
     ma = max(largest , arr[i]+k);

    ans= min(ans , ma-mi);
 }

   return ans;
}

int main(){

    int arr[]={1,5,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int minH =minimizetheHeight_I(arr , n , 2);
    cout<<minH;
}
