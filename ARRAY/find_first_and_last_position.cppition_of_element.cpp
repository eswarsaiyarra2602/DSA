 /*leetcode-34 Find First and Last Position of Element in Sorted Array */

class Solution {
public:
    int getLeftMost(vector<int>&nums, int target){
        int left_most = -1;
        int left = 0 , right = nums.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                left_most = mid ;
                right = mid-1;
            }
            else if(nums[mid]>target){
                right = mid-1;
            }
            else{
                left= mid+1;
            }
        }
        return left_most;
    }
    int getRightMost(vector<int>&nums, int target){
        int right_most = -1;
        int left = 0 , right = nums.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                right_most = mid;
                left = mid+1;
            }
            else if(nums[mid]>target){
                right = mid-1;
            }
            else{
                left= mid+1;
            }
        }
        return right_most;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left_most = getLeftMost(nums , target);
        if(left_most ==-1){return {-1,-1};}
        int right_most = getRightMost(nums , target);
        return  {left_most, right_most};
    }
};
