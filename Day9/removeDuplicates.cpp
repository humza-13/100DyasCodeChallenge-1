class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        int ptr = nums.at(0);
        int i = 1;
        
        while (i < nums.size()) {
            
            if (nums.at(i) == ptr) {
                nums.erase(nums.begin()+i);
                }
            
            else{
                ptr = nums.at(i);
                i += 1;
            }
    }
    return nums.size();
        
    }
};
