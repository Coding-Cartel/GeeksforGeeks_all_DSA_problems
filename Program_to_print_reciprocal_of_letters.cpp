class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
        string ans;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]==' ')
            {
                char ch =' ';
                ans += ch;
            }
            else if(S[i]>='A' && S[i]<='Z')
            {
                char ch = (90-S[i]+65);
                ans += ch;
            }
            else
            {
                char ch = (122-S[i]+97);
                ans += ch;
            }
        }
        return ans;
    }
};