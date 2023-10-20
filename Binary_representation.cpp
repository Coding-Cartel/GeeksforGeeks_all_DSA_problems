class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        string ans;
        int i = 0;
        while(i<=29)
        {
            int remainder = N%2;
            ans += to_string(remainder);
            N = N/2;
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};