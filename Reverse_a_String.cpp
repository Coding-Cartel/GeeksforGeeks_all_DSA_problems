class Solution {
  public:
    string revStr(string S) {
        // code here
        reverse(S.begin(),S.end());
        return S;
    }
};