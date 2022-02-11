#include<bits\stdc++.h>
using namespace std;

bool subset(int arr1[] , int n1  ,int arr2[] , int n2)
{

sort(arr1 , arr1+n1);
sort(arr2 , arr2 +n2);

int k=0 ;
for(int i=0 ; i<n1 ;i++){
    if(arr1[i]==arr2[k]){
        k++;
    }
}

if(k==n2){
    return 1;

}
else{
    return 0;
}

}



int main(){
    int arr1[]={2,3,4,5,1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={1,2,3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    if(subset(arr1 ,n1 ,arr2 ,n2)){
        cout<<"yes arr2 is a subset"<<endl;
    }
    else{
        cout<<"Not a subset"<<endl;
    }
    
}
