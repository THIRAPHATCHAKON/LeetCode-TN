class Solution {
public:
    int mySqrt(int x) {
        long long current = 0;
        if (x == 0) return 0;
        while(current * current <= x){
            current++;
        }
        return current - 1;
    }
};