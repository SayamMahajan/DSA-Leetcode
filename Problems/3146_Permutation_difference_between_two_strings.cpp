#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        vector<pair<char, int>> v1;
        for (int i=0; i<s.length(); ++i) {
            v1.push_back({s[i],i});
        }

        vector<pair<char, int>> v2;
        for (int i=0; i<t.length(); ++i) {
            v2.push_back({t[i],i});
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        int ans=0;
        for(int i = 0; i< s.length(); i++){
            ans+= abs(v1[i].second - v2[i].second); 
        }
        return ans;
    }
};