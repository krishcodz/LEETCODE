class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0,j=nums.size()-1,t=0;
        while(t<=j) {
            if(nums[t] == 0){
                swap(nums[t],nums[i]);
                i++;
                t++;
            }
            else if(nums[t] == 2){
                swap(nums[t],nums[j]);
                j--;
            }
            else{
                t++;
            }
        }
    }
};