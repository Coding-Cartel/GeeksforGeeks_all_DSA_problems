class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int unit_num=1;
    int num=n;
    while(num!=0)
    {
        int temp = num%10;
        if(temp==0)
        {
            n += 5*unit_num;
        }
        num /=10;
        unit_num *= 10;
    }
    return n;
    }
};