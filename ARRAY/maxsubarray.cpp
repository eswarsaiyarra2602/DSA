//leetcode-53 ( max subarray sum )

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int csum = 0; 
        for(auto it : nums){
            csum+= it ; 
            maxSum = max(maxSum , csum);
            if(csum<0) csum = 0 ; 
        }
        return maxSum;
    }
};
