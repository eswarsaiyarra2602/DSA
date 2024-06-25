//leetcode - 153

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0 , right = nums.size()-1;
        int minElement = INT_MAX;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[left]<=nums[mid]){
                minElement = min(minElement, nums[left]);
                left = mid+1;
            }
            else if(nums[mid]<=nums[right]){
                minElement = min(minElement , nums[mid]) ;
                right = mid-1;
            }
        }
        return minElement ; 
    }
};
