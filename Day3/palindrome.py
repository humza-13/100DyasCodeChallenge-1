class Solution:
    def isPalindrome(self, x: int) -> bool:
        is_palindrome = lambda value: value == value[::-1]
        
        if x < 0:
            return False
        
        return is_palindrome(str(x))
            
