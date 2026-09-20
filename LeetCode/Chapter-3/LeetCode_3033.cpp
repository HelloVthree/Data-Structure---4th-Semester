class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<vector<int>> answer = matrix;
        vector<int> max(c, -1);

        for(int i =0; i < c; i++){
            int current_max = -1;
            for(int j = 0; j < r; j++){
                if(matrix[j][i] > current_max) current_max = matrix[j][i];
            }
            max[i] = current_max;
        }
        for(int i =0; i < c; i++){
            for(int j =0; j < r; j++){
                if(matrix[j][i] == -1) answer[j][i] = max[i];
            }
        }     

    return answer;
    }
};
