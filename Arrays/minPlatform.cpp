#include<bits/stdc++.h>
using namespace std;

int minPlatform(int arv[] , int dept[] , int n){
	
	sort(arv , arv+n);
	sort(dept , dept+n);
	
	int j=0;
	int platform=0;
	
	for(int i=0 ; i<n ;i++){
		
		if(arv[i]>dept[j]){
			j++;
		}
		else{
			platform++;
			
		}
	}
	return platform;
	
	
	
	
}
int main(){
	int arv[]={900,1100,1150,1200};
	int dept[]={1000,1200,1500,1600};
	int n = sizeof(arv)/sizeof(arv[1]);
	
	int platform = minPlatform(arv , dept , n);
	cout<<"Minimum platform required: "<<platform;
	
}
