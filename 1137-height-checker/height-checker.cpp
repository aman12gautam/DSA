class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> x = heights;
        sort(x.begin(), x.end());

        int count = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != x[i]) {
                count++;
            }
        }
        return count;
    }
};