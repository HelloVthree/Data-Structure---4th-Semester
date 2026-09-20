class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int count = 0;
        for(int i : nums){
            count+=map[i];
            map[i]++;           
        }
        return count;
    }
};
