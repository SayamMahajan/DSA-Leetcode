#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int smallest,largest, maxd ;
        smallest= arrays[0].front();
        largest= arrays[0].back();
        maxd= 0;

        for(int i = 1; i<arrays.size(); i++){
            int temp1 = arrays[i].front();
            int temp2 = arrays[i].back();
            
            maxd = max(maxd , abs(largest - temp1));
            maxd = max(maxd , abs(smallest - temp2));

            smallest = min(smallest, temp1);
            largest = max(largest, temp2);
        }
        return maxd;
    }
};