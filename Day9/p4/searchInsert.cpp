class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if (target > nums[nums.size() - 1])
            return nums.size();
        
        vector<int> :: iterator it;
        
        it = find(nums.begin(), nums.end(), target);
        
        if (it != nums.end())
            return it - nums.begin();
        
        else{
            int i = 0;
            
            while (i < nums.size()){
                
                if (nums[i] > target)
                    return i;
                i++;
            }
        }
        return 0;
    }
};
