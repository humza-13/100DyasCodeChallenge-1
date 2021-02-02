class Solution {
    public int strStr(String haystack, String needle) {
          
        if(needle.isEmpty() || (haystack.isEmpty() && needle.isEmpty()))
            return 0;
        
        if (haystack.isEmpty())
            return -1;
        
        if(haystack.contains(needle))
            return haystack.indexOf(needle);
        
        return -1;
    }
}
