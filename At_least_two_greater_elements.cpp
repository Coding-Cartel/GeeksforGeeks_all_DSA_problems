class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here  
        vector<int> ans;
        sort(a,a+n);
        for(int i=0;i<n-2;i++)
        {
            ans.push_back(a[i]);
        }
        return ans;
    }
};