#include<iostream>
using namespace std;

int BinaryToDecimal(int n){
	
	
	int decimal=0;
	int base=1;
    while(n){
    	int temp= n%10;
    	n =n/10;
    	
    	decimal = decimal + temp*base;
    	
    	base= base*2;
    	
    	
	}
	return decimal;	
	
}

int main(){
	int bi =  100001;
	int dec= BinaryToDecimal(bi);
	
	cout<<"Decimal : "<<dec;
}
