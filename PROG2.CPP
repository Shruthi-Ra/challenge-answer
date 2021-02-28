bool palindrome_string(std::string value)
{
int a=0;
int b=value.length()-1;
while(a<b)
{
if(value[a]!=value[b])
return false;
a++
b--;
}
return true;
}
bool palindrome_num(int value)
{
int a=0,b;
b=value;
while(value>0)
{
a=a*10+value%10;
value=value/10;
}
if(value==a)
return true;
else
return false;
}