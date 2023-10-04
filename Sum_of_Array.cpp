class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    int count = 0;
	    for(int i=0;i<n;i++)
	    {
	        count = count + arr[i];
	    }
	    return count;
	}
};