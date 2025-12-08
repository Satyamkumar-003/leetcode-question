class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for (int c = 1; c <= n; c++) {
            for (int i = 1; i < c; i++) {
                for (int j = 1; j < c; j++) {
                    int a = i * i;
                    int b = j * j;
                    int high = c * c;
                    if ((a + b) == high) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};