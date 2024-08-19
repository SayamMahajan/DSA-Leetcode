#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double min_avg = INT_MAX;

        while (nums.size() > 1) {
            int max_val = INT_MIN, min_val = INT_MAX;
            int max_idx = 0, min_idx = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > max_val) {
                    max_val = nums[i];
                    max_idx = i;
                }
                if (nums[i] < min_val) {
                    min_val = nums[i];
                    min_idx = i;
                }
            }
            double current_avg = (min_val + max_val) / 2.0;
            min_avg = min(min_avg, current_avg);

            if (max_idx > min_idx) {
                nums.erase(nums.begin() + max_idx);
                nums.erase(nums.begin() + min_idx);
            } else {
                nums.erase(nums.begin() + min_idx);
                nums.erase(nums.begin() + max_idx);
            }
        }

        return min_avg;
    }
};
