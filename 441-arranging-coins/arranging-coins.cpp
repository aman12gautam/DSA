class Solution {
public:
    int arrangeCoins(int n) {
        int start =0;
        int end = n;
        int ans =0;

        while(start<=end){
            long long mid = start+(end-start)/2;

            if( mid*(mid+1)/2<=n){
                ans = mid;
                start = mid+1;

            }else{
                end = mid-1;
            }
        }
        return ans;
        
    }
};