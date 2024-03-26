class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        nums.erase(remove_if(nums.begin(), nums.end(), [](int n) { return n <= 0; }), nums.end());
        sort(nums.begin(), nums.end());
        
        int smallestMissing = 1;
        for (int num : nums) {
            if (num == smallestMissing) {
                smallestMissing++;
            } else if (num > smallestMissing) {
                return smallestMissing;
            }
        }
        
        return smallestMissing;
    }
};
