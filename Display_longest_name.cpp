class Solution
{
public:
    string longest(string names[], int n)
    {
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (names[i].size() > ans.size())
            {
                ans = names[i];
            }
        }
        return ans;
    }
};