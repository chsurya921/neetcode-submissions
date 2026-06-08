class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(m!=n) return false;
        vector<char> set;
        for(int i=0;i<n;i++){
            set.insert(set.end(),s[i]);
        }
        for(int i=0; i<m; i++){
            auto ch = find(set.begin(),set.end(),t[i]);
            if(ch != set.end()) set.erase(ch);
        }
        if (set.empty()) return true;
        return false;
    }
};
