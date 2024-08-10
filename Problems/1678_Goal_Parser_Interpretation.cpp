#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i =0; i< command.length();i++){
            if(command[i] == '(' && command[i+1] == ')'){
                ans.push_back('o');
                i++;
            }
            else if(command[i] == '(' && command[i+1] != ')'){
                ans+= "al";
                i+= 3; 
            }
            else{
                ans.push_back(command[i]);
            }
        }
        return ans;
    }
};
