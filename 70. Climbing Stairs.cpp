class Solution {
public:
  int climbStairs(int n) {
    if (n <= 1) return 1;

    int prev = 1;
    int curr = 1;

    for (int i = 2; i <= n; ++i) {
      int next = prev + curr;
      prev = curr;
      curr = next;
    }

    return curr;
  }
};
