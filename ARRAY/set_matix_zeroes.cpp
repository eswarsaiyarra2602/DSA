//leetcode - 73 
/* we can also do this by creating two extray array for markingg 
but this approach uses first row and col as marking arrays and we deal with them seperatelu */


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col0 = 1;
        int row0 = 1 ;
        for(int i = 0 ; i<m ; i++){
            if(matrix[i][0] == 0){
                col0 = 0;
            }
        }
        for(int j = 0 ; j<n ; j++){
            if(matrix[0][j] == 0){
                row0 = 0;
            }
        }
        for(int i = 1 ; i<m ; i++){
            for(int j = 1 ; j<n ; j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0 ; 
                    matrix[0][j] = 0 ; 
                }
            }
        }
        for(int i = 1 ; i<m ; i++){
            for(int j = 1 ; j<n ; j++){
                if( matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0; 
                }
            }
        }
        if(row0==0){
            for(int j = 0 ; j<n ; j++){           
                matrix[0][j] = 0;
            }
        }
        if(col0==0){
            for(int i = 0 ; i<m ;i++){
                matrix[i][0] = 0;
            }
        }
    }
};
