class Solution
{
public:
    bool fascinating(int n)
    {
        // code here
        int temp = 123456789;

        string a = to_string(n);

        string b = to_string(n * 2);

        string c = to_string(n * 3);

        string ans = to_string(temp);

        string concate = a + b + c;

        sort(concate.begin(), concate.end());

        if (concate == ans)
        {
            return 1;
        }
        return 0;
    }
};