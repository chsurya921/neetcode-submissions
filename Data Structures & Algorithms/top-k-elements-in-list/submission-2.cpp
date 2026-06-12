class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            map[nums[i]]++;
        }
        vector<vector<int>> ref(n + 1);
        for(auto& mp :map){
            ref[mp.second].push_back(mp.first);
        }
        vector<int> ans;
        for (int i = ref.size()-1; i>=0; i--) {
            for(int num: ref[i]){
                ans.push_back(num);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
