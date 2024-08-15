#include<vector>
#include<algorithm>
#include<string>
using namespace std;


class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, int>> pairs;
        for (int i=0; i<heights.size(); ++i) {
            pairs.push_back({heights[i],i});
        }
        sort(pairs.begin(), pairs.end());
        reverse(pairs.begin(), pairs.end());
        vector<string> ans;

        for(int i=0 ; i<heights.size(); i++){
            ans.push_back(names[pairs[i].second]);
        }
        return ans;
    }
};