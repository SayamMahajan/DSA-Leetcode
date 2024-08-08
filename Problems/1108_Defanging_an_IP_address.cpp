#include<string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int j =0 ;
        for(int i = 0; i< address.length(); i++){
            if( address[i] == '.'){
                ans.append("[.]");
            }
            else{
                ans += address[i];
            }
        }
        return ans;
    }
};