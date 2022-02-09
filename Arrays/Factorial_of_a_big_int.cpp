#include<iostream>
using namespace std;


int multiply(int x , int res[] , int res_size){

      int carry= 0;

      for(int i=0 ;i<res_size ;i++){
          int product = x*res[i] + carry;
      
          res[i] = product%10;

          carry = product/10;

         

      }

      while(carry){
          res[res_size] = carry%10;
          carry = carry/10;
          res_size++;
      }
return res_size;

}
void factorial(int n){

int res[600];
res[0]=1;
int res_size=1;

for(int i=2 ;i<=n ;i++){
    res_size = multiply(i , res , res_size);

}
cout<<"factorial of "<<n<<" : ";
for(int i =res_size-1 ; i>=0 ;i--){
    cout<<res[i];
}

}
int main(){
    int x =100;
    factorial(20);
}
