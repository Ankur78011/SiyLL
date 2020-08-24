#include<iostream.h>
#include<conio.h>
class dubcillinklist
{
public:
struct node
{
int data;
node *next;
node *prev;
}*head,*tail,*temp,*ptr,*nptr;

dubcillinklist()
{
head=NULL;
tail=NULL;
}

void create(int n)
{
temp=new node;
temp->data=n;
temp->prev=ptr;
temp->next=ptr;
}

void display()
{
ptr=head;
if( head==NULL)
  cout<<"\n link list is empty";
  else
  {
  cout<<"\n link list is  ";
  while(ptr!=NULL)
  {cout<<ptr->data;
  ptr=ptr->next;
  }
}
}

void insert_at_beg()
{
if(head==NULL)
 {
head=tail=temp;
 }
else
  {

  temp->next=head;
  temp->prev=tail;
  head=temp;
  tail->next=head;
  }
}

void insert_at_end()
{
if(tail==NULL)
head=tail=temp;

else
{tail->next=temp;
tail=temp;
temp->next=head;
head->prev=tail;
}
}
void insert_at_pos(int e)
{
int c=0;
ptr=head;
while(ptr!=head)
{
c=c+1;
if(c==e-1)
break;
ptr=ptr->next;
}
temp->next=ptr->next;
temp->prev=ptr;
temp->next->prev=temp;
ptr->next=temp;
}

void del_at_beg()
{
if(head==NULL)
cout<<"\n link list is empty";

else if		(head==tail)
{ nptr=head;
delete nptr;
head=tail=NULL;
}
else
{
ptr=head;
head=ptr->next;
tail->next=head;
head->prev=tail;
delete ptr;
}
}

void del_at_end()
{ if(tail==NULL)
cout<<"\n linklist empty";
else if(head==tail)
{
nptr=head;
delete nptr;
head=tail=NULL;
}
else
{
ptr=tail;
while(ptr->next!=tail)
ptr=ptr->next;
ptr->next=head;
tail=ptr;
head->prev=tail;
delete ptr;
}
}

void del_at_pos(int u)
{

ptr=head;
while(ptr!=NULL)
{
if(ptr->data==u)
ptr->prev->next=ptr->next;
ptr->next->prev=NULL;
delete ptr;
}
}
void count()
{int c=0;
ptr=head;
while(ptr!=NULL)
{
ptr=ptr->next;
c++;
}
cout<<"\total number of nodes ="<<c;
}

void search(int ser)
 {int c=0;
 ptr=head;
 while(ptr!=NULL)
 {
 c++;
if(ptr->data==ser)
{
cout<<"\n position of node is "<<"  "<<c;
break;
}
ptr=ptr->next;
}
if(ser==0||ptr==NULL)
cout<<"\n node does not exixts";
}
};
void main()
{clrscr();
dubcillinklist ob;
char ch='y';
int choice,x,y,z,f;
while(ch=='y')
{
cout<<"\n menu";
cout<<"1.insert at beginning"<<endl;
cout<<"\n2.insert at eng";
cout<<"\n3.insert at perticular position";
cout<<"\n4.delete from beginning ";
cout<<"\n5.delete from end";
cout<<"\n6. delete from a position";
cout<<"\n7.count number of modes";
cout<<"\n8.search any node";
cin>>choice;
if(choice==1||choice==2||choice==3)
{cout<<"\n enter the data for nodes";
cin>>x;
}
ob.create(x);
switch(choice)
{case 1:
ob.insert_at_beg();
ob.display();
break;
case 2:
ob.insert_at_end();
ob.display();
break;
case 3:
cout<<"\n enter the position at which you want to insert";
cin>>y;
ob.insert_at_pos(y);
ob.display();
break;
case 4:
ob.del_at_beg();
ob.display();
break;
case 5:
ob.del_at_end();
ob.display();
break;
case 6:
cout<<"\n enter the node you want to delete";
cin>>z;
ob.del_at_pos(z);
ob.display();
break;
case 8:
cout<<"enter the node you want to serch"<<endl;
cin>>f;
ob.search(f);
break;
case 7 :
ob.count();
break;
default:
cout<<"\nwrong input";
}
cout<<"\n enter y to do more actions"<<"  ";
cin>>ch;
}
getch();
}



