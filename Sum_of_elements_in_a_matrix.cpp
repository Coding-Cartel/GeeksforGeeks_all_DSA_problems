class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        // code here
        int count =0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                count = count + Grid[i][j];
            }
        }
        return count;
    }
};