class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat[0].size();
        int m=mat.size();
        vector<int>res;
        res.reserve(n*m);
        int row=0;
        int col=0;
        bool up=true;
                for (int i = 0; i < m * n; i++) {
            res.push_back(mat[row][col]);

            if (up) {
                if (col == n - 1) {        // hit right wall: go down
                    row++;
                    up = false;
                } else if (row == 0) {     // hit top wall: go right
                    col++;
                    up = false;
                } else {                   // keep moving up-right
                    row--;
                    col++;
                }
            } else {
                if (row == m - 1) {        // hit bottom wall: go right
                    col++;
                    up = true;
                } else if (col == 0) {     // hit left wall: go down
                    row++;
                    up = true;
                } else {                   // keep moving down-left
                    row++;
                    col--;
                }
            }
        }

        // while(row<n && col<m){
        //     if(up==true){
        //         while(row>0 && col<n-1){
        //             res.push_back(mat[row][col]);
        //             col++;
        //             row--;
        //         }
        //         res.push_back(mat[row][col]);
        //         if(col==n-1){
        //             row++;
        //         }
        //         else{
        //             col++;
        //         }
                
        //     }
        //     else{
        //         while(row<m-1 && col>0){

        //             res.push_back(mat[row][col]);
        //             col--;
        //             row++;

        //         }
        //          res.push_back(mat[row][col]);
        //          if(row==m-1){
        //             col++;
        //          }
        //          else{
        //             row++;
        //          }
               
        //     }
        //     up=!up;
        // }
    //     if(i%2==0){
    //         int k=i;
    //         int j=0;
    //         while(k>=0){
    //             if(j==n-1){
    //                 res.push_back(mat[k][j]);
                    
    //                 break;
    //             }
    //             res.push_back(mat[k][j]);
    //             k--;
    //             j++;
                
    //         }
            
    //     }
    //     else{
    //         int k=i;
    //         int j=0;
    //         while(k>=0){
                
    //             res.push_back(mat[j][k]);
    //             k--;
    //             j++;
                
    //         }
    //     }
    // }
    // int z=mat.size();
    // for(int i=1;i<z;i++){
    //     if((n-1+i)%2==0){
    //         int k=i;
    //         int j=z-1;
    //         while(k<z){
    //             res.push_back(mat[j][k]);
    //             k++;
    //             j--;
                
    //         }

    //     }
    //     else{
    //         int k=z-1;
    //         int j=i;
    //         while(j<=z-1){
    //             res.push_back(mat[j][k]);
    //             k--;
    //             j++;
               
    //         }
    //     }
    // }
    
       return res; 
    }
};