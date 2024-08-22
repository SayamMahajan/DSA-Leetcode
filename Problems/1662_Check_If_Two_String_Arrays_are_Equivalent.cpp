#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i=0,j=0;
        int i1=0,j1=0;
        
        while(i<word1.size() && j<word2.size()){
            string s1 = word1[i];
            string s2 = word2[j];
            while(i1 < s1.length() && j1 <s2.length()){
                if(s1[i1]!=s2[j1]){
                    return false;
                }
                i1++;
                j1++;
            }
             if (i1 == s1.length()) {
                i++;
                i1 = 0;
            }
            if (j1 == s2.length()) {
                j++;
                j1 = 0;
            }
        }
        if(i != word1.size() || j != word2.size()){
            return false;
        }
        return true;
    }
};