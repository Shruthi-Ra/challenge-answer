void fibonacci_series(int size)
{
int a=0,b=0,c=0;
for(int i=1;i<=size;++i)
{
if(i==1)
{
cout<<i;
continue;
}
if(i==2)
{
cout<<i;
continue;
c=a+b;
a=b;
b=c;
cout<<c;
}
}
