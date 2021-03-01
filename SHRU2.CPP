#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void palindrome_string(char[]);
void palindrome_num(int);
void main()
{
clrscr();
int v;
char value[20];
cout<<"Enter any name";
gets(value);
cout<<"\nEnter any number";
cin>>v;
palindrome_string(value);
palindrome_num(v);
getch();
}
void palindrome_string(char value[])
{
int c=0;
for(int i=0;i<strlen(value);i++)
{
if(value[i]==value[strlen(value)-1-i])
{c++;}
}
if(c!=0)
cout<<"\nfalse";
else
cout<< "\ntrue";
}
void palindrome_num(int v)
{
int a=0,c=0;
while(v>0)
{
a=a*10+v%10;
v=v/10;
if(v==a)
c++;
continue;
}
if(c==0)
cout<<"\ntrue";
else
cout<<"\nfalse";

}