class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pr = 0, mini = prices[0];
        for(int i = 0;i<prices.size();i++){
            mini = min(prices[i],mini);
            pr = max(prices[i] - mini,pr);
        }
        return pr;
    }
};