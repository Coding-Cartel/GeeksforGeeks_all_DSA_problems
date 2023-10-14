string transform(string s)
{
    // code here
    string ans;
    int x = s.size();
    ans.append(1,toupper(s[0]));
    for(int i=1;i<x;i++)
    {
        if(s[i]==' ')
        {
            ans.append(1,' ');
            ans.append(1,toupper(s[i+1]));
            i++;
        }
        else
        {
            ans.append(1,s[i]);
        }
    }
    return ans;
}