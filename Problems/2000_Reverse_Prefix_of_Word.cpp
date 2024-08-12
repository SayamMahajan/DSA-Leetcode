#include<string>
using namespace std;


class Solution {
public:
    string reversePrefix(string word, char ch) {
        int posi=0;
        for(int i =0 ; i<word.length(); i++){
            if(word[i] == ch){
                posi = i;
                break;
            }
        }
        if (posi == -1) {
            return word; 
        }
        int i = 0;
        while(i<posi){
            char temp = word[i];
            word[i]= word[posi];
            word[posi]= temp;
            i++;
            posi--;
        }
        return word;
    }
};