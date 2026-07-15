class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int p = 2 * n;
        int e = 0;
        int odd = 0;

        for (int i = 1; i <= p; i++) {
            if (i % 2 == 0)
                e += i;
            else
                odd += i;
        }

        for (int i = min(e, odd); i >= 1; i--) {
            if (e % i == 0 && odd % i == 0)
                return i;
        }

        return 1;
    }
};
