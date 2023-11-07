class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], currSum = 0;
        for(auto item: nums){
            if(currSum < 0) currSum = 0;
            currSum += item;
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
};