class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1 || k==0 || n==k) return;
        vector<int> t;
        if(n<k) k=k%n;
        int i =0;
        for(i = n-k;i<n;i++){
            t.push_back(nums[i]);
        }
        for(i = 0 ; i < n-k; i++){
            t.push_back(nums[i]);
        }
        int j =0;
        while(j<n){
            nums[j] = t[j];
            j++;
        }
    }
};