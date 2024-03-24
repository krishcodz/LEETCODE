class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int , int> mp;
        for(auto i : nums){
            if(mp[i] == 1) return i;
            else mp[i]++;
        }
        return -1;
    }
};