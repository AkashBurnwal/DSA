class Solution {
    int nextNumber(int n) {
        int sum = 0;
        while (n > 0) {
            sum += (n % 10) * (n % 10);
            n = n / 10;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        int slow = nextNumber(n);
        int fast = nextNumber(nextNumber(n));
        while (fast != slow) {
            slow = nextNumber(slow);
            fast = nextNumber(nextNumber(fast));
        }

        return fast == 1;
    }
};
