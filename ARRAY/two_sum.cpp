// leetcode -1 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int>result;
        int n = nums.size();
        for(int i = 0 ; i<n; i++){   
            if(mp.count(target - nums[i])){
                result.push_back( mp[target - nums[i]] );
                result.push_back(i);
                break;
            }
            mp.insert({nums[i] , i});
        }
        return result;
    }
};
