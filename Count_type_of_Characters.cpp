class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int lower =0;
            int upper =0;
            int num =0;
            int special =0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    lower++;
                }
                else if(s[i]>='A' && s[i]<='Z')
                {
                    upper++;
                }
                else if(s[i]>='0' && s[i]<='9')
                {
                    num++;
                }
                else
                {
                    special++;
                }
            }
            vector<int> ans;
            
            ans.push_back(upper);
            ans.push_back(lower);
            ans.push_back(num);
            ans.push_back(special);
            
            return ans;
        }
};