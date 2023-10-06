class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    int count =0;
	    int counter =0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<=x)
	        {
	            count++;
	        }
	        if(arr[i]>=x)
	        {
	            counter++;
	        }
	    }
	    return {count,counter};
	}
};