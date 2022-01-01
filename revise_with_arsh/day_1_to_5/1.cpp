// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        map<map<char, int>, vector<string>> mp;

        for(string str: string_list) {
            map<char, int> freq;
            for(char c: str) freq[c]++;
            mp[freq].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto i: mp) {
            ans.push_back(i.second);
        }
        return ans;
    }
};

