class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int br=-1;
        for(int i = nums.size()-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                br= i;
                break;
            }
        }

        if(br==-1){
            reverse(nums.begin(),nums.end());
        }
        else {
            for(int i = nums.size()-1;i>=br;i--){
                if(nums[i] > nums[br]){
                    swap(nums[i],nums[br]);
                    break;
                }
            }
            reverse(nums.begin()+br+1 , nums.end());   
        }
    }
};