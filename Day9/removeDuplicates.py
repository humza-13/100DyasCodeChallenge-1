class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0 or nums == None: return None
        i = 1
        ptr = nums[0]
        
        while i < len(nums):
            if nums[i] == ptr:
                nums.pop(i)
            else:
                ptr = nums[i]
                i+=1

        return len(nums)
