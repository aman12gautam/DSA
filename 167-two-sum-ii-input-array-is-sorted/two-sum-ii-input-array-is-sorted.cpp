class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n= num.size();
        int p=0, q= n-1;
        vector<int> result = {-1,-1};
        while(p<q) {
            int sum = num[p]+num[q];
            if(sum== target){
                result[0]= p+1;
                result[1]= q+1;
                break;
            }
            else if(sum<target){
                p++;
            }
            else{
                q--;
            }
        }
        return result;
        
    
    

        
   
        
    }
};