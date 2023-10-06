class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> ans;
	    float sum =0;
	    float avg =0;
	    for(int i=0;i<n;i++)
	    {
	        sum = sum + arr[i];
	        avg = sum / (i+1);
	        ans.push_back(avg);
	    }
	    return ans;
	}
};