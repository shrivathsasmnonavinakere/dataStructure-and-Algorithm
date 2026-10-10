class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {

    

        for(int i=0;i<matrix[0].size();i++){
            int max=0;
            for(int j=0;j<matrix.size();j++){
                if(max<matrix[j][i]){
                    max=matrix[j][i];
                }
                
            }
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][i]<0){
                    matrix[j][i]=max;
                }
                
            }

        }
        return matrix;
        
    }
};