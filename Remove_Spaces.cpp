class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};