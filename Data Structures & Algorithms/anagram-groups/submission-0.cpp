class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        int n = strs.size();
        for(const auto& s : strs){
            vector<int>count(26,0);
            for(char c:s){
                count[c-'a']++;
            }
            string key=to_string(count[0]);
            for(int j=1;j<26;j++){
                key+= ','+to_string(count[j]);
            }
            map[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(const auto& pair:map){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
