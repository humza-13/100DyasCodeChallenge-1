class Solution {
public:
    int reverse(int x) {
        double rev = 0;
        int temp = 0;
        
        while(x != 0){
            temp = x % 10;
            x /= 10;
            rev = rev * 10 + temp;
        }
        if (rev >= 2147483647 || rev <= -2147483648)
            return 0;
        
        return (int)rev;
        
    }
};
