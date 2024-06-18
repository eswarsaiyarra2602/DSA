//gfg - array leaders 


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int>result;
        int maxElement = arr[n-1];
        for( int i = n-1 ; i>=0 ; i--){
            if( arr[i] >= maxElement ){
                result.push_back(arr[i]);
            }
            maxElement = max(maxElement , arr[i]); 
        }
        reverse(result.begin() , result.end());
        return result;
    }
};
