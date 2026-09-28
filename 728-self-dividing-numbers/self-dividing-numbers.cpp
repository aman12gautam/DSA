class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for( int num = left; num<= right; num++){
            int n = num;

            bool selfDividing = true;
            while(n>0){
                int digit = n%10;
                n = n/10;
            
            if(digit == 0){
                selfDividing = false;
                break;
            }if( num%digit != 0){
                selfDividing = false;
                break;
            }
        } 
        if(selfDividing){
            ans.push_back(num);
        }
        }
        return ans;
       

        
     
        
    }
};