class Solution
{
    public:
        string modify (string s)
        {
            //code here.
            string ans;
            string finalll;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    ans.append(1,s[i]);
                }
            }
            reverse(ans.begin(),ans.end());
            int j=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    
                    finalll.append(1,ans[j++]);
                }
                else
                {
                    finalll.append(1,s[i]);
                }
            }
            return finalll;
        }
};