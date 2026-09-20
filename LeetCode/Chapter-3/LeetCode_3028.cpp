class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int res =0;
        for(int i = 0; i < n; i++){
            count+= nums[i];
            if(count == 0) res++;
        }
        return res;
    }
};
