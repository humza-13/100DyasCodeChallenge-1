class Solution {
    public int searchInsert(int[] nums, int target) {
        boolean flag = false;
        
        for (int num : nums) {
            
            if (num == target) 
                flag = true;
        }
        
        if (flag == true){
            int i = 0;

            while(i < nums.length){

                if(nums[i] == target)
                    return i;
                
                i++;
                }
            }
        
        else{
            
            if (target > nums[nums.length - 1])
                return nums.length;
            
            else{
            
                int i = 0;
                while(i < nums.length){
                
                    if(nums[i] > target)
                        return i;
                                      
                    i++;
                }
            }
        }
        
        return 0;
        
    }
}
