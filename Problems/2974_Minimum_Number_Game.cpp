#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        
        while (!nums.empty()) {
            auto aliceIt = min_element(nums.begin(), nums.end());
            int aliceMin = *aliceIt;
            nums.erase(aliceIt);
            
            auto bobIt = min_element(nums.begin(), nums.end());
            int bobMin = *bobIt;
            nums.erase(bobIt);
            
            arr.push_back(bobMin);
            arr.push_back(aliceMin);
        }
        
        return arr;
    }
};
