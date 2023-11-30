#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        for(int i = 0; i < s.size(); i++) if(s[i] != s[s.size() - 1 - i]) return false;
        return true;
    }
};

int main (){
    Solution sol;
    cout << sol.isPalindrome(444);

    return 0;
}