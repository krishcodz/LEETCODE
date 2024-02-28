class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int c = 0;
     if(nums.size()==1) return nums[0];
     for(int i = 0;i<nums.size();i++){
         c^=nums[i];
     }
     return c;
    }
};