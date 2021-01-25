class Solution {
    public int reverse(int x) {
        int reversed = 0;
         
        if(x > 0){
            reversed += reverser(x);    
        }
        else if(x < 0){
            x *= -1;
            reversed += reverser(x) * -1;                
        }
        return reversed;      
        
    }
    
     int reverser(int y){
            int upper_bound = Integer.MAX_VALUE / 10;
            int lower_bound = Integer.MIN_VALUE / 10;
            
            int rev = 0;
            
            while(y != 0){
                
                int temp = y % 10;
                y /= 10;
                
                if (rev > upper_bound || (rev == upper_bound && temp > 7)){
                    return 0;
                }
                if (rev < lower_bound || (rev == lower_bound && temp < -8)){
                    return 0;
                }
                rev = rev * 10 + temp; 
            }
         
            
            return rev; 
            
        }
}
