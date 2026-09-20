class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        stack<char>st2;
        for(char c : s){
            if(!st.empty() && st.top() == c) st.pop();
            else st.push(c);
        }
        string res = "";
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty()){
            res+= st2.top();
            st2.pop();
        }
    return res;
    }
};
