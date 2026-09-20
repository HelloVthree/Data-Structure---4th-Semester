class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int x1 = edges[0][0], x2 = edges[0][1];
        int y1 = edges[1][0], y2 = edges[1][1];

        if(x1 == y2 || x1 == y1) return x1;
        return x2;
    }
};
