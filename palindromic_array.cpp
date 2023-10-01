class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for (int i = 0; i < n; i++)
        {
            int reversed_num = 0, remain, original;
            original = a[i];
            while (original > 0)
            {
                remain = original % 10;
                reversed_num = reversed_num * 10 + remain;
                original = original / 10;
            }
            if (reversed_num != a[i])
            {
                return 0;
            }
        }
        return 1;
    }
};