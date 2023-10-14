string to_upper(string str){
    //code
    for(int i=0;i<str.size();i++)
    {
        str[i] = str[i] - 32;
    }
    return str;
}