//leetcoe - 162


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
