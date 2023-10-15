class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    // Your code goes here
	    vector<string> ans;
	    int n=S.size();
	    while(n!=0)
	    {
	        string temp;
	        for(int i=0;i<n;i++)
	        {
	            temp.append(1,S[i]);
	        }
	        ans.push_back(temp);
	        temp = "";
	        n--;
	    }
	    return ans;
	}

};