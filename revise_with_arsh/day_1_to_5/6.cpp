// https://leetcode.com/problems/greatest-common-divisor-of-strings/

class Solution {
    bool isDivisible(string target, string div) {
        if(target == "") return true;
        int k = div.length();
        string s = target.substr(0, k);
        if(div != s) return false;
        return isDivisible(target.substr(k), div);
    }
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1.length() > s2.length()) swap(s1, s2);
        int n = s1.size();
        string ans = "";

        for(int k = 1; k <= n; ++k) {
            string s = s1.substr(0, k);
            if(isDivisible(s1, s) && isDivisible(s2, s)) ans = s;
        }

        return ans;
    }
};

