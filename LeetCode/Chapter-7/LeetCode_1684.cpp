class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26] ={};
        for(char c : allowed) arr[c - 'a'] = 1;
        int count = 0;
        for(string s : words){
            int flag = 1;
            for(char c : s){
                if(arr[c - 'a'] == 0){
                    flag =0;
                    break;
                }
            }
            count += flag;
        }
    return count;
    }
};
