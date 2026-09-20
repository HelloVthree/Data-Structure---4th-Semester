class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        for(int i =0; i < n; i+=2){
            count+= min(nums[i], nums[i+1]);
        }
    return count;
    }
};
