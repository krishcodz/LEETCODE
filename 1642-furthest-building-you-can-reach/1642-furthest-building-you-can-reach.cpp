class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int res = 0;
        priority_queue<int> pq;
        for(int i = 1; i < heights.size();i++){
            int len = heights[i] - heights[i-1];
            if(len > 0){
                if(bricks >= len){
                    bricks-=len;
                    pq.push(len);
                }
                else{
                    if(ladders > 0 ) {
                        if (!pq.empty()) {
                            int t = pq.top();
                            if( t > len){
                                pq.pop();
                                bricks+=t;
                                if(bricks < len ) return res;
                                bricks -= len;
                                pq.push(len);
                            }
                        }
                        ladders--;
                    }
                    else return res;
                }
            }
            res++;
        }
        return res;
    }
};