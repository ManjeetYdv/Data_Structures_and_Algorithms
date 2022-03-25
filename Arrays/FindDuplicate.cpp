#include<bits/stdc++.h>
using namespace std;


// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

 
  int findDuplicate(vector<int>& nums) {
        
        int x;
        vector<int> dup;
        for(int j=0;j<=nums.size();j++){
            dup.push_back(0);
         }  

    for(int i=0;i<nums.size();i++){
        
       if(dup[nums[i]]==0){
           dup[nums[i]]=nums[i];
       }
       else{
           x=nums[i];
          break;
       }
         
        
       }
         
    
   return x ;     
        
    }


 int main(){
     vector<int>nums;

     nums.push_back(2);
     nums.push_back(2);
     nums.push_back(1);

     int x = findDuplicate(nums);
     cout<<x;

 }   
