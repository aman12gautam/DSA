class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum =0;
        int sqr =0;
        while(n>0){
            int digit = n%10;
            sum+=digit;
            sqr+= digit*digit;
            n=n/10;
        }
        return sqr-sum>=50;
        
    }
};