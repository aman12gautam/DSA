
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        long long count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i] - i;

            count += i - mp[x];

            mp[x]++;
        }

        return count;
    }
};