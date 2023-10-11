class Solution {
public:
    void Addition(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        // Code here
        for(int i=0;i<matrixA.size();i++)
        {
            for(int j=0;j<matrixB.size();j++)
            {
                matrixA[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }
    }
};