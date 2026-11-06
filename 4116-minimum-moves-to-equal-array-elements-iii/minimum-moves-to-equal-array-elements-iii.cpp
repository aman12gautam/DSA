class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max1 = *max_element(nums.begin(), nums.end());
        int count =0;
        for(int i=0; i<nums.size(); i++){
            while(nums[i]<max1){
               nums[i]++;
               count++;
            }
        }
        return count;
    }
};