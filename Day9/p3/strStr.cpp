class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.empty() || (haystack.empty() && needle.empty()))
            return 0;
        
        if (haystack.empty())
            return -1;
        
        size_t found = haystack.find(needle);
        
        if(found != string :: npos)
            return found;
        
        return -1;
        
    }
};
