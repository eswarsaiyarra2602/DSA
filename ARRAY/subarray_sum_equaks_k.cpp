//leetcode - 560

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>myMap ;
        int csum = 0 , result = 0 ;
        myMap.insert( {0,1} );

        for(int i = 0 ; i<nums.size() ; i++){   
            csum += nums[i];
            if(myMap.count(csum-k)){
                result+=myMap[csum-k];
            }
            myMap[csum]++;
        }
        return result;
    }
};
