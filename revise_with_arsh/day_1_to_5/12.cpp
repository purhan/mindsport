// https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1#

class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        if(n == 1) return 1;
        return n * n + squaresInChessBoard(n - 1);
    }
};
