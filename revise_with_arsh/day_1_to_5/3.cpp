// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans = 0;
        int i = 0, j = 0;
        long long product = 1;

        while(j < n) {
            product *= a[j];
            while(product >= k) {
                product /= a[i];
                i++;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }
};

