#include<iostream.h>
#include<conio.h>
#include<process.h>
const int size=30;
class stack
{
int s[size];
int top;
public:

  stack()
  {
  top=-1;
   }

void push(int ele)
{
if(top==size-1)
  cout<<"\n stack is already full  :-)" ;
else
 {top++;
  s[top]=ele;
 }
}

void display()
{
cout<<"\n stack is";
 for(int i=top;i>=0;i--)
 cout<<endl<<s[i]<<endl;
 }
 int pop()
 {
 int n;
 if(top==-1)
  exit(1);
  else
  {n=s[top];
 top--;
 }
 return n;
}
}
;
void main()
{clrscr();
stack ob;
char ch='y';
char ch1;
int data,want;
while(ch=='y'||ch=='Y')
{cout<<"\nENTER THE ELEMENT YOU WANT TO INSERT";
cin>>data;
ob.push(data);
cout<<"\nCURRENT STACK";
ob.display();
cout<<"\n****WANT TO INSERT MORE ELEMENT (PRESS Y) press n if not";
cin>>ch;
}
cout<<"do you want to perform pop operation press 1";
cin>>want;
if (want==1)
{cout<<"\n now delteion :";
ch1='y';
while(ch1=='y'||ch1=='y')
{
cout<<ob.pop();
cout<<"\n element delteted is ";
ob.display();
cout<<"\n do you want to do more deletion";
cin>>ch1;
}
}
getch();
}
