class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> map;
        int n = grid.size();
        int repeat = 0, missing =0;
        for(int  i =0; i < n; i++){
            for(int j =0; j < n; j++){
                map[grid[i][j]]++;
                if(map[grid[i][j]] > 1) repeat = grid[i][j];
            }
        }
        for(int i =1; i <= n*n; i++){
            if(map[i] == 0) missing = i;
        }
        return{repeat, missing};
    }
};
