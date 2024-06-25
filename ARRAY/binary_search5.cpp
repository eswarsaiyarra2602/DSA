//leetcode -33
 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*we identify sorted halves everytime and check whether 
        target lies in that interval or not , if lies we consider that array 
        otherwise we elimate that half 
        */
        int result = -1;
        int left = 0 , right = nums.size()-1;
        while(left<=right){
            int mid =  left + (right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left] <= nums[mid]){
                if( nums[left] <= target && target < nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else {
                if(nums[mid] < target && target <= nums[right]){
                    left = mid + 1; 
                }
                else{
                    right = mid-1;
                }
            }
        }
        return -1; 
    }
};
