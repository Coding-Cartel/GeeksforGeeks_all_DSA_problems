bool isBinary(string str)
{
   // Your code here
   int x = str.size();
   int count =0;
   for(int i=0;i<x;i++)
   {
       if(str[i]=='0' || str[i]=='1')
       {
           count++;
       }
   }
   if(count == x)
   {
       return true;
   }
   return false;
}