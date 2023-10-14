vector<string> extractIntegerWords(string s)
{
    // code here
    string ans;
    vector<string> ansf;
    for(int i=0;i<s.size()+1;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            ans = ans + s[i];
        }
        else
        {
            if(ans.size()!=0)
            {
                ansf.push_back(ans);
            }
            ans = "";
        }
    }
    return ansf;
}