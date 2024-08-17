#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans(s.length(),' ');
        for(int i = 0; i< indices.size() ; i++){
            int index = indices[i];
            ans[index] = s[i];
        }
        return ans;
    }
};