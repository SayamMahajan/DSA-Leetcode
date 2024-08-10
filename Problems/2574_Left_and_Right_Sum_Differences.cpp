#include<vector>
#include<cmath>
#include<numeric>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int lsum;
        lsum =0;
        int rsum = accumulate(nums.begin(), nums.end(), 0);

        for(int i = 0; i< nums.size(); i++){
            rsum -= nums[i];
            ans.push_back(abs(rsum-lsum));
            lsum += nums[i];
        }
        return ans;
    }
};