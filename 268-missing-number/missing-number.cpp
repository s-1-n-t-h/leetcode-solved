class Solution {
public:
    
    int sumMethod(vector<int> nums){
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i< n; i++){
            sum += nums[i];
        }
        int actualSum = n*(1+n)/2;
        return actualSum - sum;
    }
    int indexMatchMethod(vector<int> nums){
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size(); i++)
            if(i!=nums[i])
                return i ;
        return nums.size();
    }
    int xorr(vector<int> nums){
        int indexXor = 0, arrXor = 0;
        for( int i = 0; i <= nums.size(); i++){
            indexXor ^= i;
        }
        for( int i = 0; i < nums.size(); i++){
           arrXor ^= nums[i];
        }
        return indexXor^arrXor;
    }
    int missingNumber(vector<int>& nums) {
        return xorr(nums);
    }
};