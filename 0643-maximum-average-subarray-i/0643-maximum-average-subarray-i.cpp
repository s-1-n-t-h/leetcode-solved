class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, n = nums.size();
        for(int i=0; i<k;i++){
            sum += nums[i];
        }
        int i = 0, j = k-1, maxSum = sum;
        j++;
        while(j<n){
            sum -= nums[i++]; sum += nums[j++];
            maxSum = max(sum,maxSum);
        }
        return maxSum/(double)k;
    }
};