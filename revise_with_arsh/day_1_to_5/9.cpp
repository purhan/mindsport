https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

class Solution{
public:
    string printMinNumberForPattern(string S){
        string ans = "";
        stack<int> st;
        int i = 0;
        for(; i < S.length(); ++i) {
            char ch = S[i];
            if(ch == 'D') {
                st.push(i + 1);
            } else {
                st.push(i + 1);
                while(!st.empty()) {
                    ans += to_string(st.top()); st.pop();
                }
            }
        }
        st.push(i + 1);
        while(!st.empty()) {
            ans += to_string(st.top()); st.pop();
        }
        return ans;
    }
};
