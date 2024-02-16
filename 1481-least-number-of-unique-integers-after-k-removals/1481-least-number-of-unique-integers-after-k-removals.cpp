class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> count;
        for (int num : arr) {
            count[num]++;
        }

        vector<int> v;
        for (auto entry : count) {
            v.push_back(entry.second);
        }
        sort(v.begin(), v.end());
        int ct = 0;
        for(int i =0;i<v.size();i++){
            if(k > v[i]){
                k-=v[i];
                v[i] = 0;
            }
            else{
                v[i]-=k;
                k=0;
            }
            if(v[i]>0) ct++; 
        }

        return ct;
    }
};
