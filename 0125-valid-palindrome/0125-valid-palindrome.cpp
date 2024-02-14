class Solution {
public:
    bool isPalindrome(string s) {
        string t,r;
        for(auto i : s){
            if(isalnum(i)){
                t+=tolower(i);
            }
        }
        for(int i = t.size()-1;i>=0;i--){
            r+=t[i];
        }
        if(t==r){
            return true;
        }
        return false;
    }
};