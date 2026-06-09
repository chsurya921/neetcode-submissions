class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            auto n = map.find(target-nums[i]);
            if(n != map.end()){
                
                ans.push_back(n->second);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]]=i;
        }
        return ans;
    }
};
