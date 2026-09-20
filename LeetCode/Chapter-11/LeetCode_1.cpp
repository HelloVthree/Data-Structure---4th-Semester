class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();
        for(int i =0; i < n; i++){
            int sisa = target - nums[i];
            if(map.count(sisa) == 1) return {map[sisa], i};
            else{
                map[nums[i]] = i;
            }
        }
        return {};
    }
};
