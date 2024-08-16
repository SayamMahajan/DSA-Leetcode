#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int removed = 0;
        for(int i = 0; i< nums.size(); i++){
            for(int j = i+1; j< nums.size(); j++){
                if(nums[j] == nums[i]){
                    nums.erase(nums.begin() + j);
                    j--;
                }
            }
        }
        return nums.size();
    }
};