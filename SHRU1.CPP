#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void rev(char[]);
void rev_val(int);
void main()
{
clrscr();
int a,num;
char s[40],r[40];
cout<<"\nEnter any string";
gets(s);
cout<<"\nEnter any number";
cin>>a;
rev(s);
rev_val(a);
getch();
}
void rev(char s[])
{
char r[20];
for(int i=0;i<strlen(s);i++)
{
 r[i]=s[strlen(s)-i-1];
 cout<<r[i];
}
}
void rev_val(int a)
{
int rnum=0,rs;
while(a!=0)
{
 rs=a%10;
 rnum=rnum*10+rs;
 a=a/10;
}
cout<<rnum;
}