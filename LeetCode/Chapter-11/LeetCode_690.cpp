class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> map;
        int n = employees.size();
        int count = 0;
        for(auto x : employees){
            map[x->id] = x;
        }
        dfs(map, id, count);
        return count;
    }

    void dfs(unordered_map<int, Employee*> map, int id, int& count){
        count += map[id]->importance;
        for(int x : map[id]->subordinates){
            dfs(map, x, count);
        }
    }
};
