class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0,j = 0;
        int n = nums.size();
        while(i < n && nums[i]!=1 ) ++i;
        if(i==n) return nums[n-1];
        bool t = false;
        int res = 0;
        for(j = i+1;j<nums.size();j++){
            if(t && nums[j]==1) {
                i=j;
                cout << "here" << i << endl;
                res = max(res,1);
                t=false;
            }
            if(nums[j]!=1){
                res = max(res,j-i);
                i=j+1;
                t= true;
            }
        }
        res = max(res,j-i);
        cout << "i : " << i << " J: " << j << endl;
        return res;
    }
};