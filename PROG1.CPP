std::string reverse_string(std::string value)
{
char r[30];
for(int i=0;i<strlen(s);i++)
{
 r[i]=s[strlen(s)-i-1];
}
return r;
int reverse_num(int value)
{
int num;
for(i=0;i<sizeof(value);i++)
{
 num=num*10;
 num=num+value%10;
 value=num/10;
 }
return num;
}