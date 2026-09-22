class Solution {
public:
    bool isPerfectSquare(int num) {
        long long  a ;
        for( a =0; a*a <= num; a++){
            if(a*a == num){
                return true;
            }
        }
        return false;
        
        
    }
};