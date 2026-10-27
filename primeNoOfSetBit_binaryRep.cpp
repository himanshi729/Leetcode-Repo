class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            count += (n % 2); //  if the last bit is 1
            n /= 2;           // Divide by 2 
        }
        return count;
    }

    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19 };
        int result = 0;

        for (int num = left; num <= right; num++) {
            int setBits = countSetBits(num);
            
            if (primes.count(setBits)) {
                result += 1;
            }
        }
        return result;
    }
};
