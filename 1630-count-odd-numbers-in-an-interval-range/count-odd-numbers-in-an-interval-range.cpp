class Solution {
public:
    int countOdds(int low, int high) {
        int countodd = 0;

        for(int i=low; i<=high; i++){
            if(i%2==1)
            countodd++;
        }
        return countodd;

        
    }
};