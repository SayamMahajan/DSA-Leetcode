#include<string>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        char ans = 0;
        for( char num : n){
            if(ans < num){
                ans = num;
            }
        }
        return ans - '0';
    }
};