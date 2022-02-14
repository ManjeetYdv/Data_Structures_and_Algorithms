#include<iostream>
using namespace std;

void rotateRight(int arr[] , int l , int m){
	
	int temp= arr[m];
	for(int i=m ;i>l ; i--){
		arr[i]=arr[i-1];
	}
	arr[l]=temp;
}

void rearrange(int arr[] , int n)
{
int wrongpos = -1;
 
    for (int i = 0; i < n; i++)
    {
        if (wrongpos >= 0)
        {
           
            
	   	      if((arr[i]>=0 && arr[wrongpos]<0) || (arr[i]<0 && arr[wrongpos]>=0))
            {
                rotateRight(arr, wrongpos, i);
 
               
                if (i - wrongpos>= 2)
                    wrongpos = wrongpos+ 2;
                else
                    wrongpos = -1;
            }
        }
 
        
        if (wrongpos == -1) {
           
            if (((arr[i] >= 0) && (!(i & 0x01)))|| ((arr[i] < 0) && (i & 0x01))) {              //i % 0x01 is 1 if i is odd
                wrongpos = i;
            }
        }
    }
	
}








int main(){
	
	int arr[]={2,-2,1,3,-1,-4,5};
	int n = sizeof(arr)/sizeof(arr[1]);
	
	rearrange(arr , n);
	
	for(int i=0 ; i<n ;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
