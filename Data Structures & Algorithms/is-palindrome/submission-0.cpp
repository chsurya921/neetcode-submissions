class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        for (char c : s) {
            if (isalnum(c))
                n.push_back(tolower(c));
        }
        int len = n.length();
        for (int i = 0; i < len / 2; i++) {
            if (n[i] != n[len - 1 - i])
                return false;
        }
        return true;
        
    }
};
