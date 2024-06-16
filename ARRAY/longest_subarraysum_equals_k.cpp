//gfg problemlink - https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

class Solution {
public:
    int lenOfLongSubarr(int A[], int N, int K) {
        unordered_map<int, int> myMap;
        myMap[0] = -1; // Initialize to handle sum from start of array
        int csum = 0;
        int result = 0;
        
        for (int i = 0; i < N; i++) {
            csum += A[i];
            
            // If (csum - K) exists in map, we found a subarray summing to K
            if (myMap.find(csum - K) != myMap.end()) {
                int len = i - myMap[csum - K];
                result = max(result, len);
            }
            
            // Insert csum into map if not already present
            if (myMap.find(csum) == myMap.end()) {
                myMap[csum] = i;
            }
        }
        
        return result;
    }
};
