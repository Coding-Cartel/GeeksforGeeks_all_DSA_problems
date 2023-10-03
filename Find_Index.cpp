class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int> ans;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                count++;
                ans.push_back(i);
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==key)
            {
                count++;
                ans.push_back(i);
                break;
            }
        }
        if(count == 0)
        {
            return {-1,-1};
        }
        return ans;
    }
  
};