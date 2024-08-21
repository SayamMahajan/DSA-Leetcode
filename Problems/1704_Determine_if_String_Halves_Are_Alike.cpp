#include<string>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int countl = 0, countr=0, i = 0;
        int j = s.length()-1;
        while (i < j) {
            char left = tolower(s[i]);
            char right = tolower(s[j]);

            if (left == 'a' || left == 'e' || left == 'i' || left == 'o' || left == 'u') {
                countl++;
            }

            if (right == 'a' || right == 'e' || right == 'i' || right == 'o' || right == 'u') {
                countr++;
            }

            i++;
            j--;
        }
        return countl==countr;
    }
};