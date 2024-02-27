class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero = 0;
        int s = 0;
        for(auto i : nums){
            if(i != 0){
                nonzero++;
                nums[s] = i;
                s++;
            }
        }
        for(int i = nonzero;i<nums.size();i++){
            nums[i] = 0;
        }
    }
};