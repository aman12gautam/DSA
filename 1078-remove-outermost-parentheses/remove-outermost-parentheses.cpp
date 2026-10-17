class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string s1;
        for(auto x:s){
            if(x=='('){
                if(!st.empty()){
                    s1+=x;
                }
                st.push(x);
            }else{
                st.pop();
                if(!st.empty()){
                    s1+=x;
                }
            }
        }
        return s1;
    }
};