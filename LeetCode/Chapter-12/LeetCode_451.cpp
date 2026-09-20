class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        priority_queue<pair<int, char>> pq;
        for(char c: s){
            map[c]++;
        }
        for(auto x : map){
            pq.push({x.second, x.first});
        }
        string res ="";
        while(!pq.empty()){
            auto[freq, x] = pq.top();
            pq.pop();
            res.append(freq, x);
        }
    return res;
    }
};
