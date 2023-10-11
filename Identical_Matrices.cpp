class Solution {
  public:
    int areMatricesIdentical(int N, vector<vector<int>> Grid1,
                             vector<vector<int>> Grid2) {
        // code here
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(Grid1[i][j]!=Grid2[i][j])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
};