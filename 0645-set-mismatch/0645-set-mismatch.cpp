class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int duplicate = -1;
        int sum_actual = 0;

        for (int i = 0; i < n; i++) {
            sum_actual += nums[i];
            if (i > 0 && nums[i] == nums[i - 1]) {
                duplicate = nums[i];
            }
        }

        int expected_sum = n * (n + 1) / 2;
        int missing = expected_sum - (sum_actual - duplicate);

        return {duplicate, missing};
    }
};