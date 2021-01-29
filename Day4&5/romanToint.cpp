class Solution {
public:
    int romanToInt(string s) {
       
        int num = 0;
        map<char,int> romans = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };            
        
        for (int i = 0; i < s.length(); i++){
            
            if (s[i] == 'V' || s[i] == 'X'){
                if(i != 0 && s[i-1] == 'I')
                    num -= 2;
                }
            
            else if (s[i] == 'L' || s[i] == 'C'){
                if(i != 0 && s[i-1] == 'X')
                    num -= 20;
                }
           
            else if (s[i] == 'D' || s[i] == 'M'){
                if(i != 0 && s[i-1] == 'C')
                    num -= 200;
                }
            num += romans.at(s[i]);
          
        }
        return num;
        
    }
};
