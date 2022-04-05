#include<bits/stdc++.h>
using namespace std;

long long maxProductSubArr(vector<int> arr){

     int n = arr.size();

     long long curproduct=1,maxproduct=INT_MIN;
        for(int i=0;i<n;i++){
            
            curproduct=curproduct*arr[i];
            maxproduct=max(maxproduct,curproduct);
            if(curproduct==0){
                curproduct=1;
            }
            
        }
        curproduct=1;
        for(int i=n-1;i>=0;i--){
            
            curproduct=curproduct*arr[i];
            maxproduct=max(maxproduct,curproduct);
            if(curproduct==0){
                curproduct=1;
            }
            
        }
        return maxproduct;

}

int main(){
    vector<int>arr = {2, 3, 4, 5, -1, 0};
    int maxSub = maxProductSubArr(arr);

    cout<<"highest product sub array : "<<maxSub;
 


}
