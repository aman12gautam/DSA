class Solution {
public:
    int totalMoney(int n) {
        int weeks = n /7;
        int days = n%7;

        int ans =0;

        for( int j =0 ; j<weeks; j++){
            int start = j+1;
            ans+= 7* start +21;
        }  
        int start = weeks+1;
        for( int i=0; i<days; i++){
            ans+= start +i;
        }
        return ans;
    }
};