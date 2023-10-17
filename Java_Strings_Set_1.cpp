class Solution {
  public:
    string conRevstr(string S1, string S2) {
        // code here
        string ans;
        ans = S1+S2;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};