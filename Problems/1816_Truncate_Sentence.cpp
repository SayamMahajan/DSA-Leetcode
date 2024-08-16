#include<string>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string ans;
        int i = 0;
        for(i = 0; i<s.length(); i++){
            if(s[i] == ' '){
                count++;
                if(count == k){
                    break;
                }
            }
        }
        for(int j = 0 ; j<i ; j++){
            ans.push_back(s[j]);
        }
        return ans;
    }
};