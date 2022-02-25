#include <iostream>
#include <fstream>
using namespace std;

//functions
int num(char ch){
	int elem = int(ch);
	if (elem > 64 && elem < 91){
		return elem-65;
	}
	else if(elem > 96 && elem < 124){
		return elem-97;
	}
	return 27;
}


void read(ifstream & chr , int arr[]){
	int count = 0;char ch;
	while(!chr.eof()){
		chr >> ch; 
		int check = num(ch);
		if(check != 27){
			arr[check]++;
		}
	}
	return ;
}


void printHisto(int arr[26]){
  int max = arr[0];
  for (int i = 0; i < 26 ; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  for (int i = max; i > 0; i--){
    if( i < 10){
cout << " " << i;
}
else{
cout << i;
}
    cout << "|";
    for (int j = 0; j < 26; j++){
      if(arr[j] >= i){
        cout << " =" ;
      }
      else{
        cout << " ";
      }
    }
    cout << endl;
  }
  cout << "____________________" << endl;
  cout << " ";
  for (int j = 0; j < 26; j++){
    cout <<char(65+j) << " ";
  }
}


int main() {
	int lst[26] = {0};
	ifstream fin;
	fin.open("target.txt");
	if(fin.fail()){
		cout << "error : cant open the file " << endl;
	}
	read(fin, lst);
	printHisto(lst);
}
