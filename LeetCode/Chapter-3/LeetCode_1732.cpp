class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int location = 0, max =0;
        int n = gain.size();
        for(int i =0; i< n; i++){
            location+=gain[i];
            if(location > max) max = location;
        }
        return max;
    }
};
