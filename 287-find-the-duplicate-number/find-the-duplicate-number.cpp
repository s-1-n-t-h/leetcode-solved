class Solution {
public:
    int hashMap(vector<int> nums){
        unordered_map<int,int> numMap;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(numMap.find(nums[i]) != numMap.end())
                return nums[i];
            numMap[nums[i]] = i;
        }
        return -1;
    }
    int markVisited(vector<int> nums){
        int n = nums.size();
        for(int i = 0; i< n; i++){
            int index = abs(nums[i]);
            if(nums[index]<0)
                return index;
            nums[index] *= -1;
            
        }
        return -1;
    }
    int positioningMethod(vector<int> nums){
        while(nums[0] != nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
    int findDuplicate(vector<int>& nums) {
        return positioningMethod(nums);
    }
};