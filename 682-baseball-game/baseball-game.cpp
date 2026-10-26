class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        
        for(auto x :operations){
           
             if(x=="C"){
                st.pop();
            }else if(x=="+"){
                int a=st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
                
             
            }else if(x=="D"){
               st.push(2*st.top());
            }else{
                st.push(stoi(x));
            }
        }
        int add=0;
        while(!st.empty()){
            add+=st.top();
            st.pop();
        }
        return add;
       
    }
};