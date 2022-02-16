#include<iostream>

using namespace std;

int maxElement(int arr[] , int n){
    int max= arr[0];
    
    for(int i=1 ;i<n; i++){
        if(arr[i]> max){
            max= arr[i];
        }
    }
    return max;

}


void countSort(int arr[] , int n , int div){
   
    int output[n];
    int count[10]={0};

    for(int i=0 ;i<n ;i++){
        count[ (arr[i]/div)%10 ]++;
    }

    for(int i=1 ;i<10 ;i++){
        count[i]+= count[i-1];
    }

    for(int i=n-1 ;i>=0 ;i--){
        output[--count[ (arr[i]/div)%10 ]] = arr[i];
    }

    for(int i=0 ;i<n ;i++){
        arr[i]=output[i];
    }
 


}

void RadixSort(int arr[] , int n){
    int max =  maxElement(arr , n);
    
   for(int div=1 ; max/div>0 ;div*=10){
        countSort(arr ,n , div);
    }
      
}





int main(){
    int arr[]={3,55,4,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    RadixSort(arr , n);

    cout<<"Sorted array is :";
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}