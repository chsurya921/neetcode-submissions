class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            auto n = map.find(target-nums[i]);
            if(n != map.end()){
                return {map[target-nums[i]],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};
