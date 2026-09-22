class Solution {
public:
    string convertToBase7(int num) {
        string ans = "";
        bool negative = false;
        if(num == 0)
            return "0";
            

            if(num<0){
                negative = true;
               num = -num;
            }

            while(num > 0){
                int digit  = num%7;
                ans+= to_string(digit);
                num = num/7;

            }
            if(negative)
                ans+= "-";
            
            reverse(ans.begin(), ans.end());
            return ans;
        
        
        
        
    }
};