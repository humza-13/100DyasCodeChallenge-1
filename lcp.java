class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length == 0 || strs == null){
            return "";
        }
        if (strs.length == 1)
            return strs[0];
        
        String prefix = strs[0];
        
        for (int i = 0; i < prefix.length(); i++){
            char check = prefix.charAt(i);
            
            for (int j = 1; j < strs.length; j++){
                if(i == strs[j].length() || strs[j].charAt(i) != check){
                    prefix = prefix.substring(0,i);
                }
            }
        }
        return prefix;
        
    }
}
