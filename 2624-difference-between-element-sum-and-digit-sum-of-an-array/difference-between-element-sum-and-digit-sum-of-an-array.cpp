class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0;
        int sum1=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            int n = nums[i];
            while(n>0){
                int digit = n%10;
                sum1+= digit;
                n= n/10;
            }
            
        }
        return abs(sum-sum1);
        
    }
};