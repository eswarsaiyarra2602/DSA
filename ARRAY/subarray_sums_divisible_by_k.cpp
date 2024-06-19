//leetcode - 974

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int csum = 0 ; 
        int result = 0 ; 
        mp.insert({0,1});
        for(int i = 0 ; i < n ; i++){
            csum += nums[i] ;
            int rem = csum%k;
            if(rem<0){rem=rem+k;}
            if(mp.find(rem) != mp.end()){
                result += mp[rem];
            }
            mp[rem]++;
        }
        return result;
    }
};
