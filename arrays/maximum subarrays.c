#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
// function to find the maximum sum of a contiguous subarray
int maxSubArraySum( const vector<int>& nums){
    int max_so_far = INT_MIN;
    int current_sum = 0;
    for( int i = 0; i< nums.size() ; i++){
        current_sum=+ nums[i];
        //update the maximum sum found so far
        if( current_sum > max_so_far){
            max_so_far = current_sum;
        }
        // if current sum becomes negative, discard it and reset to 0
        if( current_sum < 0){
            current_sum = 0;
        }
    }
    return max_so_far;
}

int main() {
    // Write C++ code here
   vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4};
   int max_sum = maxSubArraySum(nums);
   cout<< "The maximum contiguous subarray sum is : " << max_sum<< endl;
    return 0;
}
