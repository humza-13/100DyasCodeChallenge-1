class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        
        if needle == '' or (haystack == '' and needle == ''):
            return 0
        
        if haystack == '' :
            return -1
          
        if needle in haystack:
            return haystack.index(needle)
        
        return -1
        
