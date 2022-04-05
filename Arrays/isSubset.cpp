#include<bits/stdc++.h>
using namespace std;


bool isSubset(int arr1[] , int arr2[] , int p , int n){        //when array are unsorted

    unordered_map<int , int> m;

    for(int i=0 ;i< p;i++){
        m[arr1[i]]=1;

    }
    for(int i=0 ;i<n ;i++){
        
        if(m[arr2[i]]!=1){
            return false;
        }
    }
    return true;
    
}

int main(){
    int arr1[]={1,2,3,4,5,6};
    int m = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={4,5,1};
    int n = sizeof(arr2)/sizeof(arr2[0]);

    cout<<isSubset(arr1 , arr2 ,m , n);
}
