class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	int x = s.size();
        	int count =0;
        	for(int i=0;i<x-1;i++)
        	{
        	    if(s[i]!=s[i+1])
        	    {
        	        return false;
        	    }
        	}
        	return true;
        }
};