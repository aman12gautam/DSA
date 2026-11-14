class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;

        int n = nums[0];
        vector<int> ans;
        while (n <= nums[nums.size() - 1]) {
            if (n == nums[left]) {
                n++;
                left++;
            } else {
                ans.push_back(n);
                n++;
            }
        }
        return ans;
    }
};