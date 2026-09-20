class Solution {
public:
    priority_queue<int> pq;
    int lastStoneWeight(vector<int>& stones) {
        for(int i : stones){
            pq.push(i);
        } 
        while(pq.size() > 1){
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();

            pq.push(top1 - top2);
        }
        if(pq.size() ==  1){
            return pq.top();
        }
        return 0;
    }
};
