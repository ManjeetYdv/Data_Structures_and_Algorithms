#include<iostream>
using namespace std;

int decimalToBinary(int n){
	
	int bi=0;
	int base=1;
	while(n){
		int temp = n%2;
		n=n/2;
		
		bi = bi + temp*base;
		base = base*10;
		
	}
	
	return bi;
	
}
int main(){
	
	int dec=32;
	int bi = decimalToBinary(dec);
	cout<<"Binary : "<<bi;
	
	
	
}
