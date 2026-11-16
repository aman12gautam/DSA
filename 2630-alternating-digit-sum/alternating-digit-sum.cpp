class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> ans;
        vector<int> temp;
        int sum=0;
        while(n>0){
            int digit = n%10;
            temp.push_back(digit);
            n=n/10;
        }
        for(int i = temp.size()-1; i>=0; i--){
            ans.push_back(temp[i]);
        }
        for(int j=0; j<ans.size(); j++){
            if(j%2==0){
              sum+=ans[j];
            }else{
                sum-=ans[j];
            }
        }
        return sum;
        
    }
};