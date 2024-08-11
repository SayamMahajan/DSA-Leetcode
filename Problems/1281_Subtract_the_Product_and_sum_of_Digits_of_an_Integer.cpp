class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod= 1;
        int num = n;
        while (num != 0) {
            sum += num%10; 
            num /=10;
        }
        while (n != 0) {
            prod *= n%10; 
            n /=10;
        }
        return prod-sum;
    }
};