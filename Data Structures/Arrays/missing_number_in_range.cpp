#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum_n = (n * (n + 1))/2;
        int sum_arr = accumulate(nums.begin(),nums.end(),0);

        return (sum_n - sum_arr);
        
    }

int main() {

    vector<int> nums {3,0,1};
    int missing_number = missingNumber(nums);

    cout<<missing_number;

    return 0;
}