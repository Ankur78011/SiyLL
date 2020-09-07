#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
const int size=50;
int front=-1,rear=-1;
int q[size];

void insert(int q[],int ele)
{
if(rear==size-1)
exit(1);
else if(front==-1)
{ front=rear=0;
q[rear]=ele;
}
else
{rear++;
q[rear]=ele;
}
}
;

int remove(int q[])
{
int s;
if(rear==-1)
exit(1);
else
{
s=q[front];
if(front==rear)
front=rear=-1;
else
front++;
}
return s;
}
void display(int q[])
{if(front==-1)
exit(1);
else
for(int i=front;i<=rear;i++)
cout<<q[i]<<"<-";
}

void main()
{clrscr();
int item,res;
char ch='y';
while(ch=='y'||ch=='Y')
{cout<<"\n enter the item to insert in que";
cin>>item;
insert(q,item);
cout<<"\n queue is";
display(q);
cout<<"\n want to insert more item press y";
cin>>ch;
}
cout<<"\n want to delete element(Y/n)";
cin>>ch;
while(ch=='y'||ch=='Y')
{res=remove(q);
 cout<<"\n element del is"<<res;
 cout<<"\n your queue is";
 display(q);
 cout<<"\n want to delete more ele";
 cin>>ch;
 }
 getch();
 }
