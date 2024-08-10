#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ans=0;
        sort(nums.begin(), nums.end());

        int i= 0;
        int j= nums.size()- 1;
        while (i<j) {
            int sum = nums[i] + nums[j];
            if (sum < target) {
                ans += (j - i);
                i++;
            }
            else {
                j--;
            }
        } 
        return ans;
    }
};