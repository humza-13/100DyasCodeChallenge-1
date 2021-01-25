class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> table;
        
        for(int i = 0; i< nums.size(); ++i){
            auto comp = table.find(target - nums[i]);
            
            if (comp != table.end() && comp -> second != i){
                return {comp -> second, i};
            }
            
            table[nums[i]] = i;
            
        }
        return {};
    }
};
