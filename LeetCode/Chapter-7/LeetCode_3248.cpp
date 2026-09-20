class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row =0;
        int col = 0;
        for(string c : commands){
            if(c == "UP") row--;
            else if(c == "DOWN") row++;
            else if(c == "LEFT") col--;
            else if(c == "RIGHT") col++;
        }

        return row*n + col;
    }
};
