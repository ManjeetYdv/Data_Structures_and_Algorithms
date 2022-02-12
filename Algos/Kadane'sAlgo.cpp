#include<iostream>

using namespace std;
 
int maxSubArrSum(int arr[], int n)
{
    int currsum=arr[0];
        int maxsum =arr[0];
        
        
        
        for(int i=1 ;i< n;i++){
            
            
            if(currsum>=0){
               currsum +=arr[i];
            }
            else{
                currsum=arr[i];
            }
            
            if(currsum>maxsum){
                maxsum=currsum;
            }
        }
        
        return maxsum;
        }
 

int main()
{
   	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	
	int arr[n];
	
	
	for(int i=0;i<n;i++){
		cout<<"Enter element "<<i+1<< " : ";
		cin>>arr[i];
	}             
    cout << "Maximum contiguous sum is " <<maxSubArrSum(arr, n);
    return 0;
}
