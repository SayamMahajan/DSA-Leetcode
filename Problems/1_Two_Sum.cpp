#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> num_pairs;
        for (int i=0; i<nums.size(); ++i) {
            num_pairs.push_back({nums[i],i});
        }

        sort(num_pairs.begin(), num_pairs.end());

        int i= 0;
        int j= num_pairs.size()- 1;
        while (i<j) {
            int sum = num_pairs[i].first + num_pairs[j].first;
            if (sum == target) {
                return {num_pairs[i].second, num_pairs[j].second};
            } 
            else if (sum<target){
                 ++i;
            }
            else{
                 --j;
            }
        }
        return {};
    }
};
