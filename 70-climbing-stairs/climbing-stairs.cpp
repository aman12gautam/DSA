class Solution {
public:
    int climbStairs(int n) {
      
        if(n==0){
            return 0;

        }else if(n==1){
            return 1;
        }else if (n==2){
            return 2;
        }
        int firststep=1;
        int secondstep = 2;
        for(int i=3; i<=n; i++){
            int thirdstep = firststep+secondstep;

            firststep = secondstep;
            secondstep = thirdstep;
            

          
        }
        
      return  secondstep;
        
    }
};