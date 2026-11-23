class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int count =0;
        int x = nums.size();
        for (int i = 0; i < x; i++) {
            int n = nums[i];
            int rev = 0;
            while (n > 0) {
                int digit = n % 10;
                rev = rev * 10 + digit;
                n = n / 10;
            }
            nums.push_back(rev);
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        return mp.size();
    }
};