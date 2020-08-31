#include<iostream.h>
#include<conio.h>
struct node
{int info;
node *next;
}*top,*newptr,*save,*ptr;

node* create(int n)
{ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void push(node*np)
{if(top==NULL)
top=np;
else
{save=top;
top=np;
np->next=save;
}
}
void pop()
{if(top==NULL)
cout<<"\n empty";
else
{ptr=top;
top=top->next;
delete ptr;
}
}
void display(node*np)
{while(np!=NULL)
{cout<<np->info<<"->";
np=np->next;
}
cout<<"\!!\n";
}
void main()
{ top=NULL;
int data;
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"\n enter data for new node";
cin>>data;
newptr=create(data);
push(newptr);
cout<<"\npress y to enter morenodes, n to exit";
cin>>ch;
}
do
{cout<<"\n the stack now is\n";
display(top);
cout<<"want to pop an element presss y";
cin>>ch;
if(ch=='y'||ch=='Y')
pop();
}
while(ch=='y'||ch=='Y');
getch();
}