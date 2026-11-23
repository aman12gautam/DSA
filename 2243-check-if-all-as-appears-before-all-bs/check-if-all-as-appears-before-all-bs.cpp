class Solution {
public:
    bool checkString(string s) {
        for(int i= s.size(); i>0; i--){
            if(s[i-1] == 'b' && s[i]=='a'){
                return false;
            }
        }
        return true;
        
    }
};