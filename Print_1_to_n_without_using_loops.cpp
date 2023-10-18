class Solution
{
public:
    void printTillN(int N)
    {
        // Write Your Code here
        if(N==0)
        {
            return;
        }
        printTillN(N-1);
        cout<<N<<" ";
    }
};