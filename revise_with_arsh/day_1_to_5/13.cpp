// https://practice.geeksforgeeks.org/problems/decode-the-string2444/1

class Solution{
public:
    string decode(string &s, int &idx) {
        int times = 0;
        string word = "";

        while(idx < s.length()) {
            if(s[idx] >= '0' && s[idx] <= '9')
                times = times * 10 + (s[idx] - '0');
            else if(s[idx] == '[') {
                idx++;
                string temp = decode(s, idx);
                while(times--) word += temp;
                times = 0;
            }
            else if(s[idx] == ']')
                return word;
            else
                word += s[idx];
            idx++;
        }
        return word;
    }

    string decodedString(string s) {
        int idx = 0;
        return decode(s, idx);
    }
};
