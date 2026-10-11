class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size();
        while(start<=end){
            int mid = start+(end-start)/2;
            int count =0;
            
            for(int i=0; i<nums.size(); i++){
                if(nums[i]>=mid){
                    count++;
                }
            }
            if(count == mid){
                return mid;
            }else if(count> mid){
                start= mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
       
    }
};