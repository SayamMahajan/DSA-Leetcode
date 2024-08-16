#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumel = 0;
        int sumd = 0;

        for(int i = 0; i < nums.size(); i++) {
            sumel += nums[i];
        }
        
        for(int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            while(temp != 0) {
                sumd += temp % 10;
                temp /= 10;
            }
        }

        return abs(sumel - sumd);
    }
};
