#include<bits/stdc++.h>
using namespace std;

 void reverseVector(vector<int>& nums,int s,int e){

        while(s<=e){
            int temp = nums[s];
            nums[s] = nums[e];
            nums[e] = temp;
            s++;
            e--;
        }

    }

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k==0 || k%n==0) {
            return;
        }
        k = k%n;
    
        reverseVector(nums,0,n-k-1);
        reverseVector(nums,n-k,n-1);
        reverseVector(nums,0,n-1);
    }

int main(){

    vector<int> nums {1,2,3,4,5,6,7};

    rotate(nums,5);

    for(int x : nums){
        cout<<x<<" ";
    }

    return 0;

}    