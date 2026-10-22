class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int countzero = 0;
        int maxlength = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                countzero++;
            }
            while (countzero > k) {
                if (nums[left] == 0) {
                    countzero--;
                }
                left++;
            }
            int length = right - left + 1;
            maxlength = max(maxlength, length);
        }
        return maxlength;
    }
};