class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto i: tokens) {
            if(i=="+" or i=="-" or i=="*" or i=="/") {
                if(st.size()>=2) {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    if(i=="+") st.push(a+b);
                    else if(i=="-") st.push(b-a);
                    else if(i=="*") st.push(a*b);
                    else st.push(b/a);
                }
            }
            else {
                int x = stoi(i);
                st.push(x);
            }
        }
        return st.top();
    }
};
