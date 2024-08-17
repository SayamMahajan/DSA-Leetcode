#include<string>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        int countb = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '|'){
                countb++;
            }
            if(countb %2 == 0){
                if(s[i] == '*'){
                    ans++;
                }
            }
        }
        return ans;
    }
};