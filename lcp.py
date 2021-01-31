class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        if not strs:
            return ""
            
        if len(strs) == 1:
            return strs[0]
        
        prefix = min(strs, key = len)
        
        for i, char in enumerate(prefix):
            for words in strs:
                if words[i] != char:
                    prefix = prefix[:i]
        
        return prefix
