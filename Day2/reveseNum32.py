class Solution:
    def reverse(self, x: int) -> int:
        if x > 0:
            rev = int(str(x)[::-1])
        elif x < 0:
            rev = -1 * int(str(x * -1)[::-1])
            
        upper_bound = 2**31 - 1
        lower_bound = -2**31
        
        if rev not in range(lower_bound, upper_bound):
            return 0
        return rev
