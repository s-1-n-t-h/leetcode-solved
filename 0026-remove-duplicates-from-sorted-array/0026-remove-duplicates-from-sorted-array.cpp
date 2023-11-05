class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0, i = 1, n = nums.size();
        for( ; i < n; i++){
            if( nums[j] != nums[i]){
                j++; nums[j] = nums[i];
            }
        }
        return j+1;
    }
};