
//leetcode - 55 using recurrsion memooization
class Solution {
public:
    bool solve(vector<int>&nums, int n , int index, vector<int>&dp){
        if(index == n-1){ 
            return true;
        }
        if(dp[index] !=- 1){
            return dp[index];
        }
        for(int i = 1; i<=nums[index] ; i++){
            if(solve(nums,n,index+i, dp)==true){
                return dp[index] = true;
            }
        }
        return dp[index]=false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(10004,-1);
        return solve(nums, n, 0, dp);
    }
};
