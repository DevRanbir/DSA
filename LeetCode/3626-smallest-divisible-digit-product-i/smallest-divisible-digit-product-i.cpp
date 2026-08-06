class Solution {
public:
    int prodof(int n) {
        int prod = 1;
        while (n > 0) {
            prod *= n % 10;
            n /= 10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        int j = n;
        while (true) {
            if (prodof(j) % t == 0) {
                break;
            }
            j++;
        }
        return j;
    }
};