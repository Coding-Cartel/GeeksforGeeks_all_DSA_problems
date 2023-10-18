class Solution {
  public:
    string javaSub(string S, int L, int R) {
        // code here
        string ans ="";
        for(int i=L;i<=R;i++)
        {
            ans += S[i];
        }
        return ans;
    }
};