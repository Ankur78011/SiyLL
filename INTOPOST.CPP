#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const int size=50;
char infix[size],postfix[size],stack[size];
int top=-1;
int precedence(char ch)
{switch(ch)
{
case'^':return 5;
case '/':return 4;
case '*':return 4;
case '+':return 3;
case '-':return 3;
}
}
char pop()
{char s;
if(top==-1)
return '#';
else
{s=stack[top];
top--;}
return s;
}
char topelement()
{char ch;
if(top!=-1)
ch=stack[top];
else ch='#';
return ch;
}
void push(char ch)
{
if(top!=size-1);
  {top++;
  stack[top]=ch;
  }
 }
 int braces( char *s)
 {int lefbr,rightbr;
 lefbr=rightbr=0;
 for(int i=0;s[i];i++)
 {if(s[i]=='(')
  lefbr++;
  else if (s[i]==')')
  rightbr++;
  }
  if(lefbr==rightbr)
  return 0;
  else if(lefbr<rightbr)
  return 1;
  else return -1;
  }

  void main()
  {clrscr();
   char ele,elem,st[2];
  int pre ,prep,popped,j=0,chk=0;
  strcpy(postfix," ");
  cout<<"\n enter infix expression";
  gets(infix);
  chk=braces(infix);
  if(chk!=0)
  {cout<<"\n unbalanced brakets ";
  }
  for(int i=0;infix[i]!=NULL;i++)
  { if (infix[i]!='('&&infix[i]!=')'&&infix[i]!='^'&&infix[i]!='*'&&infix[i]!='/'&&infix[i]!='+'&&infix[i]!='-')
      postfix[j++]=infix[i];

   else if(infix[i]=='(')
      {elem=infix[i];
      push(elem);
      }
  else if(infix[i]==')')
      {
      while((popped=pop())!='(')
	 {postfix[j++]=popped;}
       }
 else
  {elem=infix[i];
   pre=precedence(elem);
   ele=topelement();
   prep=precedence(ele);
   if(pre>prep)
   push(elem);
   else
     { while(prep>=pre)
       {if(ele=='#')
       break;
       popped=pop();
       ele=topelement();
       postfix[j++]=popped;
       prep=precedence(ele);
       } push(elem);
       }
}
}
while((popped=pop())!='#')
postfix[j++]=popped;
postfix[j]='\0';
cout<<"\npostfix"<<postfix<<endl;
getch();
}