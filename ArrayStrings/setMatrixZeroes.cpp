class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();
        int colFlag=0;
        for(int i=0; i<R; i++) {
            if(matrix[i][0] == 0) {
                colFlag = 1;
            }
            for(int j=1; j<C; j++) {
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i=1; i<R; i++){
            for(int j=1; j<C; j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        for(int i=0; i<C; i++){
            if(matrix[0][0]==0){
                matrix[0][i]=0;
            }
        }
        
        if(colFlag){
            for(int i=0; i<R; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
