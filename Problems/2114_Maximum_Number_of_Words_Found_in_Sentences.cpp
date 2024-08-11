#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=1;
        int max = 0;
        for(int i = 0; i< sentences.size(); i++){
            for(int j = 0 ; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            if(max<count){
                max=count;
            }
            count = 1;
        }
        return max;
    }
}; 