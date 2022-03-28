#include<iostream>
#include<cmath>
using namespace std;


void setSpiral( int arr[100][100] , int x){
 
  
   int k =0 ;     //starting row index;
   int l =0;      //strating col index
   int m = x-1;   //ending row index   
   int n = x-1;   //ending col idx ;
   
   int p=0;

  while(k<m and l<n ){
    
    for(int i=k ;i<=n ;i++){
         arr[k][i]=p++;
        
    }
    k++;

    for(int i=k ;i<=m; i++){
        arr[i][n]= p++;

    }
    n--;

    if(k<m){

        for(int i=n ;n>=l ;i--){
            arr[m][i]= p++;

        }
       m--;
    }
    if(l<n){

        for(int i=m ;i>=k ;i--){
            arr[i][l]=p++;
        }
        l++;
    }
  }
   



}


int main(){
   
   int n;
   cout<<"Enter number of elements : " ;
   cin>>n;

   int x = sqrt(n);
  
   int ptrn[100][100];

   
  setSpiral(ptrn , x);

    for(int i=0 ;i<x ;i++){

       for(int j=0 ;j<x ;j++){
           cout<<ptrn[i][j]<<" ";
       }
       cout<<endl;
      
   }


  
}
