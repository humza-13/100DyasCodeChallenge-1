# This solution uses 1 pass hash approch
class Solution:
    
    def twoSum(self, nums, target):
    
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        table = {}
        i = 0

        while i < len(nums):
            comp = target - nums[i]

            if(comp) in table:
                return [table.get(comp), i]

            table[nums[i]] = i
            i += 1
