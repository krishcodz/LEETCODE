class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int len = s.size();
        sort(s.begin(),s.end(),greater<char>());
        int i = 0;
        while(s[i] =='1' && i < len) {
            i++;
        }
        if(i!= len) swap(s[i-1],s[len-1]);
        return s;
    }
};
