class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> st;
        for(int i =0; i < n; i++){
            while(st.size() && prices[st.back()] >= prices[i]){
                prices[st.back()] -= prices[i];
                st.pop_back();
            }
            st.push_back(i);
        }
    return prices;
    }
};
