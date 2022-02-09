#include<iostream>
using namespace std;

int maxWaterTrap(int arr[] ,int n){

int left[n];
int right[n];

left[0]=arr[0];
right[n-1]=arr[n-1];

for(int i=1 ;i<n ;i++){
    left[i] = max(left[i-1] , arr[i]);

}

for(int i =n-2 ;i>=0 ;i--){
    right[i] = max(right[i+1] , arr[i]);

}
int water =0;
for(int i=1 ;i<n-1 ;i++){

    int var = min(left[i-1] , right[i+1]);

    if(var>arr[i]){
      water  = water + (var - arr[i]);
    }
}
return water;




}

int main(){
    int arr[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int trappedWater = maxWaterTrap(arr , n);

    cout<<"Max water trapped : "<<trappedWater;
    
}
