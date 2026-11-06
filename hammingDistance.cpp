class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x ^ y;
        int countOne = 0;
        while (ans > 0) {
            if (ans % 2 == 1) {
                countOne++;
            }
            ans = ans / 2;
        }
        return countOne;

    }
};
