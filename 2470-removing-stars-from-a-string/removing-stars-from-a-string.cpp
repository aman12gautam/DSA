class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans;
        for(auto x: s){
            if(isalpha(x)){
                st.push(x);

            }else if(x=='*'){
                st.pop();
            }
        }while(!st.empty()){
            ans+=st.top();
            st.pop();

        }reverse(ans.begin(),ans.end());
        return ans;
    }
};