class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int carry = 0;
        if (nums.empty()) return carry;
        carry++;
        int current = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (current != nums[i]){
                nums[carry] = nums[i];
                current = nums[i];
                carry++;
            }
        }
        return carry;
    }
};