#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i< nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                if(abs(nums[i] - nums[j]) == k){
                    ans++;
                }
            }
        }
        return ans;
    }
};