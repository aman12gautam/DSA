class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int> num1;
        vector<int> num2;
        for(int i=1; i<=n; i++){
            if(i%m==0){
               num1.push_back(i);
            }else{
                num2.push_back(i);

            }
        }
        int sum1= accumulate(num1.begin(), num1.end(),0);
         int sum2= accumulate(num2.begin(), num2.end(),0);
         return sum2-sum1;

        
    }
};