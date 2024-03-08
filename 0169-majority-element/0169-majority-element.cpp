class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(auto i : nums){
            mp[i]++;
        }
        for(auto it : mp){
            if (it.second > (n / 2)) {
            return it.first;
        }
        }
        return -1;
    }
};