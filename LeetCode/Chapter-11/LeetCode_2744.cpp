class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> map;
        int count = 0;
        for(string s : words){
            string temp = s;
            reverse(temp.begin(), temp.end());
            if(map[temp] > 0) count++;
            else map[s]++;
        }
        return count;
    }
};
