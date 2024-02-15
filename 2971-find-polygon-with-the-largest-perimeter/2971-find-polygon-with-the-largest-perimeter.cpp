class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long res = 0;
        int n = nums.size();
        int i = n-2,l=0,j=0;
        long long sum=0;
        if(n<3) return -1;
        while(j<n-1){
                sum+= nums[j];
                j++;
        }
        while(i>=1){
            if(sum > nums[i+1]) {
                return sum+nums[i+1];
            }
            sum -= nums[i];
            i--;
        }
        return -1;
    }
};
