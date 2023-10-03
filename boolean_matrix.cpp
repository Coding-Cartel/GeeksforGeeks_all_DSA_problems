class Solution
{
public:
    // Function to modify the matrix such that if a matrix cell matrix[i][j]
    // is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>> &matrix)
    {
        // code here
        vector<vector<int>> matrix2 = matrix;
        for (int i = 0; i < matrix2.size(); i++)
        {
            for (int j = 0; j < matrix2[0].size(); j++)
            {
                if (matrix2[i][j] == 1)
                {
                    for (int k = 0; k < matrix.size(); k++)
                    {
                        matrix[k][j] = 1;
                    }
                    for (int l = 0; l < matrix[0].size(); l++)
                    {
                        matrix[i][l] = 1;
                    }
                }
            }
        }
    }
};reverse(temp.begin(),temp.end());
          ans.append(temp);