//leetcode - 1248

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int>mp ;
        mp.insert({0,1});
        int n = nums.size();
        int csum = 0 ; 
        int result = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        for( int num : nums){
            csum+= num;
            if(mp.find(csum-k) != mp.end()){
                result+= mp[csum-k];
            }
            mp[csum]++;
        }
        return result ; 
    }
};
