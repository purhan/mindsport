// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string src)
{
    string ans = "";
    int cnt = 0;
    for(int i = 0; i < src.length(); ++i) {
        if(i > 0 && src[i] != src[i - 1]) {
            ans += src[i - 1];
            ans += '0' + cnt;
            cnt = 0;
        }
        cnt++;
    }
    ans += src[src.length() - 1];
    ans += '0' + cnt;
    return ans;
}

