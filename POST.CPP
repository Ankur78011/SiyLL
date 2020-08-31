#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
const int size=50;
class postfix
{
int s[size];
public:
int top;
postfix()
{top=-1;
}

void push(char ele)
{
if(top==size-1)
   {
   cout<<"\stack is full";
   exit(1);
    }
 else
 {top++;
 s[top]=ele;
  }
}
int pop()
{ int n;
if(top==-1)
 { cout<<"\n stack empty";
   exit(1);
 }
 else
 {n=s[top];
 top--;
 }
 return n;
}
void display()
{


for(int i=top;i>=0;i--)
cout<<s[i]<<"  ";

}
};


void main()
{clrscr();
postfix ob;
int len;
int num1,num2;
char  l[size];
int res;
cout<<"\n enter the post fix expression";
gets(l);
len=strlen(l);
for(int i=0;i<len;i++)
{
if(l[i]=='+')
    {num1=ob.pop();
     num2=ob.pop();
     res=int( num1)+int (num2);
     ob.push(res);
       }
else if(l[i]=='-')
    {num1=ob.pop();
    num2=ob.pop();
    res=int(num2)-int(num1);
    ob.push(res);
    }
else if(l[i]=='*')
   { num1=ob.pop();
     num2=ob.pop();
     res=int(num2)*int(num1);
     ob.push(res) ;
     }
else if(l[i]=='/')
    {num1=ob.pop();
    num2=ob.pop();
    res=(int(num2)/int(num1)) ;
    ob.push(res);
    }
else
ob.push(int(l[i]));
}
cout<<"\n solution is ";
cout<<ob.pop();
getch();
}