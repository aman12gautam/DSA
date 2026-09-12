class Solution {
public:
    int tribonacci(int n) {
        if( n== 0 ){
            return 0;
        }else if(n==1){
            return 1;
        }else if(n==2){
            return 1;
        }
        long long firstterm =0, secondterm = 1, thirdterm=1;
        for(int i=1; i<=n; i++){
            long long fourthterm = firstterm+secondterm+thirdterm;

             firstterm =   secondterm;
             secondterm= thirdterm;
            thirdterm=  fourthterm;
        }
        return  firstterm;

        
    }
};