class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        for(int i =1;i<nums.size();i++){
            if(nums[i-1] == nums[i]) res.push_back(nums[i]);
        }
        return res;
    }
};