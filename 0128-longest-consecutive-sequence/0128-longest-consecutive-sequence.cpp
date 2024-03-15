class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int maxi = 1;
        int res = 1;
        int cur = nums[0];
        for(int i = 1 ; i<nums.size();i++){
            if(cur == nums[i]) continue;
            cur++;
            if(cur == nums[i]){
                res++;
                maxi = max(maxi,res);
            }
            else{
                res = 1;
                cur=nums[i];
            }
        }
        return maxi;
    }
};