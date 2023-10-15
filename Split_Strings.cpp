class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // code here 
        vector<string> ans;
        string s1;
        string s2;
        string s3;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]>='a' && S[i]<='z' || S[i]>='A' && S[i]<='Z')
            {
                s1 = s1 + S[i];
            }
            else if(S[i]>='0' && S[i]<='9')
            {
                s2 = s2 + S[i];
            }
            else
            {
                s3 = s3 + S[i];
            }
        }
        ans.push_back(s1);
        ans.push_back(s2);
        ans.push_back(s3);
        return ans;
    } 
};