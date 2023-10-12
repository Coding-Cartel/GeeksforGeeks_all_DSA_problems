class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string ans;
        for(int i=0;i<n;i++)
        {
            ans.append(1,arr[i]);
        }
        return ans;
    }
};