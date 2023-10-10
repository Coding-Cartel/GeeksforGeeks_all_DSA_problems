vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            temp.push_back(a[j][i]);
        }
        ans.push_back(temp);
    }
    return ans;
}
