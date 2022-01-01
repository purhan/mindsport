// https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1

class Solution {
  public:
    int findPosition(int n , int m , int k) {
        k += m - 1;
        int ans = k % n;
        return ((ans == 0) ? n : ans);
    }
};

