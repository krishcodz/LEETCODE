class Solution {
public:
    bool check(vector<int>& nums) {
        bool b = false;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                if(b) {
                    
                    return false;
                }
                b=true;
            }
            if(b){
                if(nums[i] > nums[0]) return false;
            }
        }
        return true;
}
};