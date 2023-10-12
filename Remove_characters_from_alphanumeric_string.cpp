class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	    string ans = "";
	    for(int i=0;i<S.size();i++)
	    {
	        char ch = S[i];
	        if(ch>='0' && ch<='9')
	        {
	            if(isdigit(ch))
	            {
	                ans = ans + ch;
	            }
	        }
	    }
	    return ans;
	}
};