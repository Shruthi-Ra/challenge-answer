bool isogram_string(std::string value)
{
int a=value.length();
for(int i=0;i<a;i++)
if(value[i]!=value[a-1-i])
 return false;
else
return true;
}
bool isogram_num(int value)
{
int a=value.length();
for(int i=0;i<a;i++)
if(value[i]!=value[a-1-i])
 return false;
else
return true;
}