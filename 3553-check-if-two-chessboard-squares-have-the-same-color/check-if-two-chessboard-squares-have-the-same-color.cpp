class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int sum1 = (coordinate1[0]-'a') + (coordinate1[1] -'1');
        int sum2 = (coordinate2[0] -'a') +(coordinate2[1] -'1');
        return sum1%2 == sum2%2;
        
    }
};