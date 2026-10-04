class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        if(digits.size() == 0){
            digits.insert(digits.begin(), 1);
            return digits;
        };
        int current = digits[digits.size() - 1] + 1;
        if(!(current >= 10)){
            digits[digits.size() - 1] = current;
            return digits; 
        };
        digits[digits.size() - 1] = current % 10;
        carry++;
        for(int i = digits.size() - 2 ; i >= 0 ; i--){
            if(!(carry >= 1)) return digits;
            current = digits[i] + carry;
            if(!(current >= 10)){
                digits[i] = current;
                return digits; 
            };
            digits[i] = current % 10;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};