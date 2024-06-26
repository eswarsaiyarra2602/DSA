//leetcoe - 162



class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) {return 0;}
        if(nums[0]>nums[1]){return 0;}
        if(nums[n-1]>nums[n-2]){return n-1;}
        
        int left = 1, right = n - 2;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid+1]){
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }
        return -1;
    }
};


//alternate . nost optimized code

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // If mid element is greater than the next element, 
            // then the peak element is on the left side (including mid).
            if (nums[mid] > nums[mid + 1]) {
                right = mid;
            } 
            // Else, the peak element is on the right side (excluding mid).
            else {
                left = mid + 1;
            }
        }

        // After the loop, left and right converge to the peak element index.
        return left;
    }
};
