// This also uses 1 pass hash approch
class Solution {

    public int[] twoSum(int[] nums, int target) {
        
        Map<Integer, Integer> table = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++){
            int comp = target - nums[i];
            
            if (table.containsKey(comp))
                return new int[] {table.get(comp), i};
            
            table.put(nums[i], i);
        }
        
        throw new IllegalArgumentException("No solution");
   
    }
}
