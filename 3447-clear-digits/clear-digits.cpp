class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string ss;
        for(auto x: s){
            if(st.empty()){
                st.push(x);
            }else if (!isalpha(x)){
                st.pop();
            }else{
                st.push(x);
            }

        }while(!st.empty()){
            ss+=st.top();
            st.pop();
        }reverse(ss.begin(), ss.end());
        return ss;

        
    }
};