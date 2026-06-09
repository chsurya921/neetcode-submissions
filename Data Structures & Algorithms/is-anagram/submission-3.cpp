class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        if(m!=n) return false;

        unordered_map<char,int> T;
        unordered_map<char,int> S;

        for(int i=0;i<n;i++){
            S[s[i]]++;
            T[t[i]]++;
        }
        return S==T;
        
    }
};
