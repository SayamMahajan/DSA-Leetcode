#include<vector>
#include<string>
#include<stack>
using namespace std;


class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        for (const string& op : operations) {
            if (op == "C") {
                scores.pop();
            } else if (op == "D") {
                scores.push(2 * scores.top());
            } else if (op == "+") {
                int top = scores.top();
                scores.pop();
                int newTop = top + scores.top();
                scores.push(top);  // Put back the top element
                scores.push(newTop);
            } else {
                scores.push(stoi(op));
            }
        }
        
        int ans = 0;
        while (!scores.empty()) {
            ans += scores.top();
            scores.pop();
        }
        
        return ans;
    }
};