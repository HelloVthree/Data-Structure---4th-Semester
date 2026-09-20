class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res;
        
        if(k == 0){
            for(int i =0; i < n; i++){
                res.push_back(0);
            }
            return res;
        }
        for(int i =0; i <n; i++){
            int temp =0;
            if(k>0){
                for(int j =1; j <= k; j++){
                    temp+= code[(i+j)%n];
                }
            }
            if(k<0){
                for(int j = i -1; j > i - 1 + k; j--){
                    temp+= code[(j + n) % n];
                }
            }
            res.push_back(temp);
        }
    return res;
    }
};
