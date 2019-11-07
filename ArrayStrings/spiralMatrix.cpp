class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int r1 =0;
        int c1 =0;
        if (matrix.size() == 0)
            return res;
        int r2 = matrix.size()-1;
        int c2 = matrix[0].size()-1;
        //cout<<c1<<" "<<c2<<" "<<r1<<" "<<r2;
        while(r1<=r2 && c1<=c2) {
            for (int c = c1; c <= c2; c++) {
                //cout<<"push_row_1";
                res.push_back(matrix[r1][c]);
            }
            for (int r = r1+1; r <= r2; r++) {
                res.push_back(matrix[r][c2]);
            }
            if(r1<r2 && c1<c2) {
                for (int c = c2-1; c > c1; c--) {
                    res.push_back(matrix[r2][c]);
                }
                for (int r = r2; r > r1; r--) {
                    res.push_back(matrix[r][c1]);
                }
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return res;
    }
};
