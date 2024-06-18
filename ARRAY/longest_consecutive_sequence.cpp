/* leetcode- 128
Unordered Set :
	•	Initialization: O(N)
	•	Search: Average case O(1), Worst case O(N)
	•	Insert: Average case O(1), Worst case O(N)


*/  
class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> numSet(nums.begin(), nums.end());
        int longestStreak = 0;

        for (int num : nums) {
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;
                while (numSet.find(currenatNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
