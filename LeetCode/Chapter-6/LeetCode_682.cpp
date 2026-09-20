class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int count = 0;
        for(string c : operations){
            if(c == "C"){
                st.pop();   
            }
            else if(c == "D"){
                int top = st.top();
                st.push(top*2);
            }
            else if(c == "+"){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else{
                st.push(stoi(c));
            }
        }

        while(!st.empty()){
            count += st.top();
            st.pop();
        }
        return count;
    }
};
