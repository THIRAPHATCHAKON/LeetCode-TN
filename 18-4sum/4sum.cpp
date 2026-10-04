class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i = 0 ; i < nums.size() ; i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1 ; j < nums.size() ; j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1;
                int right = nums.size() - 1;
                long long target_sum = (long long)target - nums[i] - nums[j];
                while(left < right){
                    long long sum = (long long)nums[left] + (long long)nums[right];
                    if(target_sum == sum){
                        result.push_back({nums[i], nums[j],nums[left], nums[right]});
                        right--;
                        left++;
                        while(left < right && nums[left] == nums[left - 1])left++;
                        while(left < right && nums[right] == nums[right + 1])right--;
                    }else if (sum > target_sum) {
                        right--;
                    }
                    else {
                        left++;
                    }
                }

            }
        }
        return result;
    }
};