class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count =0;
        int ans = 0;
        for(auto x: s){
             ans = max(count, ans);
           if(x=='('){
            st.push(x);
            count++;
           }else if(x==')'){
            st.pop();
            count--;
           
            
           }
        }
        return ans;
    }
};