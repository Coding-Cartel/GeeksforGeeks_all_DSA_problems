class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string ans = "";
	    for(char ch:S)
	    {
	        ch = tolower(ch);
	        if(ch=='a' || ch=='e'|| ch=='i'||ch =='o'|| ch=='u')
	        {
	            continue;
	        }
	        else
	        {
	            ans += ch;
	        }
	    }
	    return ans;
	}
};