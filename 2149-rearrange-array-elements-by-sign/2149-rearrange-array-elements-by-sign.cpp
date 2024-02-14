class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,res;
        for(auto i : nums){
            if(i>0){
                pos.push_back(i);
            }
            else{
                neg.push_back(i);
            }
        }
        for(int i = 0 ; i < (nums.size()/2);i++){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};