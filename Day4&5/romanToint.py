class Solution:
    def romanToInt(self, s: str) -> int:
        map = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        num = 0
        
        for i in range(len(s)):
            
            if (s[i] == 'V' or s[i] == 'X'):
                if(i != 0 and s[i-1] == 'I'):
                    num -= 2
            elif (s[i] == 'L' or s[i] == 'C'):
                if(i != 0 and s[i-1] == 'X'):
                    num -= 20
            elif (s[i] == 'D' or s[i] == 'M'):
                if(i != 0 and s[i-1] == 'C'):
                    num -= 200
                    
            num += map.get(s[i])
        return num
                
            
            
      

