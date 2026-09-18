class Solution {
public:
    int lengthOfLastWord(string s) {
        int carry = 0;
        string word;
        string last;
        stringstream ss(s);
        while (ss >> word){
            last = word;
        }
        carry = last.length();
        return carry;
    }
};