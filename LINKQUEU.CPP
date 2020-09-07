#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int info;
node *next;
}*front,*rear,*save,*ptr,*newptr;

node* create(int n)
{ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void insert(node *np)
{if(front==NULL)
front=rear=np;
else
{rear->next=np;
rear=np; }
}
void del()
{
if(front==NULL)
cout<<"\n link list empty";
else
{
ptr=front;
front=front->next;
delete ptr;
}
}
void display(node*np)
{
while(np!=NULL)
{cout<<np->info<<"-";
np=np->next;
}
}

void main()
{clrscr();
front=rear=NULL;
int inf;
char ch='y';
while(ch=='y'||ch=='Y')
{cout<<"\n enter info for the node";
cin>>inf;
newptr=create(inf) ;
if(newptr==NULL)
{cout<<"\n cannot create link list";
exit(1);
}
insert(newptr);
cout<<"\n press y to enter more nodes";
cin>>ch;
}
do
{cout<<"\n link list is now";
display(front);
cout<<"\n want to delete first node";
cin>>ch;
if(ch=='y'||ch=='Y')
del();
}
while(ch=='y'||ch=='y');
getch();
}
