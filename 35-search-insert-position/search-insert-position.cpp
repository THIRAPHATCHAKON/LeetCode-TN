class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        int find_area = ceil(nums.size() / 2);
        if(target >= nums[find_area]){
            for(int i = find_area; i < nums.size() ; i++){
                if (nums[i] == target){
                    index = i;
                    return index;
                }
                if (nums[i] < target) index = i;
            }
        }else{
            for(int i = 0; i < nums.size() / 2 ; i++){
                if (nums[i] == target){
                    index = i;
                    return index;
                }
                if (nums[i] < target) index = i;
            }
        }
        if(nums[index] < target) index++;
        return index;


    }
};