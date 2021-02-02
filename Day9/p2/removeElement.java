class Solution {
    public int removeElement(int[] nums, int val) {
        
        int ptr = 0;
        for(int num : nums){
            
            if(num == val) 
                continue;
            
            nums[ptr] = num;
            ptr++;
            
        }
        return ptr;
        
    }
}
