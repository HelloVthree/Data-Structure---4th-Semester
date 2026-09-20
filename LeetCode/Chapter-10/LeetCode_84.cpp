class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, visited, 0);
        for(int i = 0; i < n; i++){
            if(visited[i] == false) return false; 
        }
        return true;
    }
    void dfs(vector<vector<int>>& rooms, vector<bool>& visited, int x){
        visited[x] = true;
        for(int i : rooms[x]){
            if(!visited[i]){
                dfs(rooms, visited, i);
            }
        }
    }
};
