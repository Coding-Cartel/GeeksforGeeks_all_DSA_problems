int sumElement(int arr[],int n)
{
    //Your code here
    int count = 0;
    for(int i=0;i<n;i++)
    {
        count = count + arr[i];
    }
    return count;
}