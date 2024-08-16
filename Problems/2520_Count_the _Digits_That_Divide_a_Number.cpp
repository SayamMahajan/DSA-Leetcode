class Solution {
public:
    int countDigits(int num) {
        int x = num;
        int ans = 0;
        while(x!=0){
            int temp = x % 10;
            x /= 10;
            if(num % temp == 0){
                ans++;
            }
        }
        return ans;
    }
};