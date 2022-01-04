// https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int, int> freq;
        for(auto i: nums) freq[i % k]++;
        for(auto i: nums) {
            int r = i % k;
            if(r == 0) {
                if(freq[0] & 1) return 0;
            }
            else if(freq[r] != freq[k - r]) return false;
        }
        return true;
    }
};
