class Solution {
public:
    int climbStairs(int n) {
        if(n == 0) return n;
        int result = 0;
        int num_2 = 1;
        int num_3 = 0;
        for(int i = 1; i <= n ; i++){
            result = num_2 + num_3;
            num_3 = num_2;
            num_2 = result;
        }
        return result;
    }
};