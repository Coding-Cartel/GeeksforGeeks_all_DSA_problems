class Solution {
  public:
    string toLower(string S) 
    {
        // code here
        for(int i=0;i<S.size();i++)
        {
            if(S[i]>='a' && S[i]<='z')
            {
                continue;
            }
            else
            {
                S[i]=S[i]+32;
            }
        }
        return S;
    }
};