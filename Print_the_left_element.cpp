class Solution{
    public:
    int leftElement(int a[], int n) {
        // Your code goes here   
        sort(a,a+n);
        return a[0 + (n -1 - 0) / 2];
    }
};