class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0)
            return "";
        
        if(strs.size() == 1 )
            return strs[0];
        
        string prefix = strs[0];
        
        for(int i = 0; i < prefix.size(); i++){
            
            char check = prefix.at(i);
            for (int j = 1; j < strs.size(); j++){
                if(i == strs[j].size() || strs[j].at(i) != check){
                    prefix = prefix.substr(0, i);
                }
            }
        }
        return prefix;
        
    }
};
