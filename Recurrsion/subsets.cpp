//leetcode - 72 
//backtracking

class Solution {
public:

    void solve(vector<int>&nums, vector<vector<int>>&result , vector<int>&temp , int i){
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,result,temp,i+1);
        temp.pop_back();
        solve(nums, result,temp , i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;
        int i = 0 ; 
        solve(nums, result, temp , i);
        return result;
    }
};
