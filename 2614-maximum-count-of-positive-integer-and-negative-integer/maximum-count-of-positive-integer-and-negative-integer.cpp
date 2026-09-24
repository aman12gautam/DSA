class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        

        while(start<= end){
            int mid = start +(end- start)/2;
            if(nums[mid]>= 0){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        int negcount = start;
         

      start= 0;
      end = nums.size()-1;
        while(start<= end){
            int mid = start+(end-start)/2;

            if(nums[mid]> 0){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        int poscount = nums.size()- start;

        return max(negcount , poscount);

        
    }
};