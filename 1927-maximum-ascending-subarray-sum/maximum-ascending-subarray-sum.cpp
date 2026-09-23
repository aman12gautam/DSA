class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum = nums[0];
        int currmax = nums[0];
        for(int i =1; i< nums.size(); i++){
            if(nums[i-1]< nums[i]){
                currmax += nums[i];
            }
            else{
                maxsum = max(maxsum, currmax);
                currmax = nums[i];
            }
        }
        maxsum = max(maxsum , currmax);
        return maxsum;
        
    }
};