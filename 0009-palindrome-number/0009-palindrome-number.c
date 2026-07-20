bool isPalindrome(int x) {
    if(x < 0) return false;
    long reversed = 0;
    int origin = x;
    while(x > 0){
        reversed = (reversed * 10) + (x % 10);
        x /= 10;
    }
    return (origin == (int)reversed);
}