#include<iostream>
using namespace std;

int majority(int arr[] , int n){
 
  int maxi=arr[0];

  for(int i=0 ;i<n  ;i++){
      maxi = max(maxi , arr[i]);
  }
  int count[maxi+1];

  for(int i=0 ;i<maxi+1 ;i++){
      count[i]=0;
  }

  for(int i=0 ;i<n ;i++){
      int num = arr[i];
      count[num]++;
  }

  for(int i=0 ;i<n ;i++){
      if(count[arr[i]] > n/2){
          return arr[i];
          
      }
  }
 return -1;


}
int main(){
    int arr[]={3,1,1};
    int n = sizeof(arr)/sizeof(arr[1]);

    int major = majority(arr , n);

    if(major==-1){
        cout<<"No element is in majority "<<endl;
    }
    else{
        cout<<"Majority element is : "<<major;
            }
}
