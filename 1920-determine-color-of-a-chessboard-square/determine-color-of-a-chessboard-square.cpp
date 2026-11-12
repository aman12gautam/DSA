class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int sum = (coordinates[0] -'a') -(coordinates[1] - '1');
        return sum%2!=0;
    }
};