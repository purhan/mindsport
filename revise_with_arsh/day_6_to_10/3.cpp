// https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        vector<int> nextGreater(n);

        // Store index of next greater element
        stack<int> s;
        for(int i = n - 1; i >= 0; --i) {
            while(!s.empty() && nums[s.top()] <= nums[i]) {
                s.pop();
            }

            if(s.empty()) nextGreater[i] = n;
            else nextGreater[i] = s.top();

            s.push(i);
        }

        // For each window, the element whose NGE is outside this window, is the largest element in this window
        vector<int> ans;
        int j = 0;
        for(int i = 0; i <= n - k; ++i) {
            if(j < i) j = i;
            while(nextGreater[j] < i + k) {
                j++;
            }

            ans.push_back(nums[j]);
        }

        return ans;
    }
};
