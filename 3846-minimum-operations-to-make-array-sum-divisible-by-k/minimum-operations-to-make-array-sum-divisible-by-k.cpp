class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count =0;
       int sum = accumulate(nums.begin(), nums.end(), 0);
       while(sum%k != 0){
        count++;
        sum--;
       }
       return count;  
             
    }
};