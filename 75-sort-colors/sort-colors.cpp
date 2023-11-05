class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        int index = 0;
        while(index<=r){
            if(nums[index]==0){
                swap(nums[index],nums[l]);
                l++;index++;
            }else if(nums[index]==1){
                index++;
            }else{
                swap(nums[index],nums[r]);
                r--;
            }
        }
    }
};