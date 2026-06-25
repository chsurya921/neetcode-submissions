class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ind1 = 0;
        int ind2 = numbers.size()-1;
        int sum = 0;
        while(ind1<ind2){
            sum = numbers[ind1]+numbers[ind2];
            if(sum==target){
                return {ind1+1,ind2+1};
            }
            else if(sum > target){
                ind2--;
            }
            if(sum <target){
                ind1++;
            }
            
        }
        return {};
        
    }
};
