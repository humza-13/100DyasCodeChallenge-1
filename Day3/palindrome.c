bool isPalindrome(int x){
    int check = x;
    double rev = 0;
    int temp = 0;
        
    if(x < 0)
        return false;
        
    else{
        while(x != 0){
            temp = x % 10;
            x /= 10;
            rev = rev * 10 + temp;
            }
            
        if(rev == check)
            return true;
        }
            
    return false;
        
    }

