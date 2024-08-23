#include<string>
#include<sstream>
#include<numeric>
using namespace std;

class Solution {
public:
    string fractionAddition(string expression) {
        istringstream ss(expression);
        int A = 0, B = 1, a, b;
        char _;
        
        while (ss >> a >> _ >> b) {
            A = A * b + a * B;
            B *= b;
            int g = abs(gcd(A, B));
            A /= g;
            B /= g;
        }
        
        return to_string(A) + '/' + to_string(B);
    }
};