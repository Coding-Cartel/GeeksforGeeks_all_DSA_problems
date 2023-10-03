class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
        int array[n];
        for(int i=0;i<n;i++)
        {
            array[i]=a[i];
        }
        
        for(int j=0;j<n/2;j++)
        {
            a[j]=a[n-1];
        }
        
        if(a == array)
        {
    }
};