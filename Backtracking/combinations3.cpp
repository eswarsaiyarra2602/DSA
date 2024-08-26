//leetcode 216

class Solution {
public:
    void solve(vector<int>&nums, int i, int k, int n, int sum,vector<int>&temp, vector<vector<int>>&results){
        if(temp.size() == k){
            if(sum==n){
                results.push_back(temp);
            }
            return;
        }
        if(sum>n){return;}
        if(i>=9){return;}
        temp.push_back(nums[i]);
        solve(nums, i+1, k, n, sum+nums[i], temp, results);
        temp.pop_back();
        solve(nums, i+1, k, n, sum, temp, results);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums ;
        vector<vector<int>>results;
        vector<int>temp;
        for(int i = 1 ; i<=9 ; i++){
            nums.push_back(i);
        }
        solve(nums, 0, k, n, 0, temp, results);
        return results;
    }
};
