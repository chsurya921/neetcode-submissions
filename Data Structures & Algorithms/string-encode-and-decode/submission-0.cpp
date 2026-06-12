class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(int i=0;i<strs.size();i++){
            ans += '#' +to_string(strs[i].size()) + '#' + strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        int j=0;
        int l;
        while(i<s.length()){
            if(s[i] == '#'){
                j=i+1;
                while(s[j] != '#'){
                    j++;
                }
                
                l = stoi(s.substr(i+1, j-i-1));
                
                
                ans.push_back(s.substr(j+1,l));
                i=j+l+1;
            }
        }
        return ans;
    }
};
