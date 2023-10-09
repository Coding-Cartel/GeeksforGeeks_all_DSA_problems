class Solution{
    public:
    int getSum(int a[], int n) {
        // Your code goes here
        int count = 0;
        for(int i=0;i<n;i++)
        {
            count = count + a[i];
        }
        return count;
    }   
};