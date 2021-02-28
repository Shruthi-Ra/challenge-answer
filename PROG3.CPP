bool anagram_string(std::string value,std::string check_value)
{
int a=value.length();
int b=check_value.length();
if(a!=b)
return false;
sort(value.begin(),value.end());
sort(check_value.begin(),check_value.end());
for(int i=0;i<a;i++)
if(value[i]!=check_value[i])
 return false;
return true;
}
bool anagram_num(int value,int check_value)
{
int a=sizeof(value);
int b=sizeof(check_value);
if(a!=b)
return false;
sort(value,(sizeof(value)-1);
sort(check_value,sizeof(value)-1);
if(value!=check_value)
return false;
else
return true;
}