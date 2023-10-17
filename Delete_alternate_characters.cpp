class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string ans ="";
        for(int i=0;i<S.size();i++)
        {
            if(i%2==0)
            {
                ans += S[i];
            }
        }
        return ans;
    }
};