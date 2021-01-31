int reverse(int x){
    double rev = 0;
    
    while (x != 0){ // reversing logic
        int temp = x % 10;
        x /= 10;
        rev = rev * 10 + temp;
    }
    
    if (rev >= 2147483647|| rev <= -2147483648){ // checking for int overflow
        return 0;
    }
    
    return (int)rev;
    
}

