#include<iostream.h>
#include<conio.h>
class doublelinklist
{
public:
struct node
{
 node *prev;
 int data;
 node *next;
 }*head,*tail,*temp,*ptr,*nptr;

void create(int n)
{
ptr=new node;
ptr->data=n;
ptr->next=NULL;
ptr->prev=NULL;
}

void display()
{
if(head==NULL)
cout<<"\nlink list is empty";
else
{
cout<<"\n your link list is"<<"  ";
temp=head;
while(temp!=NULL)
{
cout<<temp->data<<"  ";
temp=temp->next;
}
}
}
doublelinklist()
{head=NULL;
tail=NULL;
}

void insert_at_beg()
{
if(head==NULL)
head=tail=ptr;
else
{ptr->next=head;
head->prev=ptr;
head=ptr;
}
}

void insert_at_end()
{
if(tail==NULL)
head=tail=ptr;
else
{
tail->next=ptr;
ptr->prev=tail;
tail=ptr;
 }
}

void insert_at_pos(int p)
{int c=0;
temp=head;
while(temp!=NULL)
{c=c+1;
if(c==p-1)
break;
temp=temp->next;
}
ptr->next=temp->next;
ptr->prev=temp;
temp->next->prev=ptr;
temp->next=ptr;
}

void del_at_beg()
{
if(head=NULL)
cout<<"\n link list is empty";
else if (head==tail)
{
nptr=head;
delete nptr;
head=tail=NULL;
}
else
{temp=head;
head=temp->next;
head->prev=NULL;
delete temp;
}
}

void del_at_end()
{
if (tail==NULL)
cout<<"\n lunklist is emppty";
else if
(head==tail)
{
nptr=head;
delete nptr;
head=tail=NULL;
}
else
{temp=tail;
tail=temp->prev;
tail->next=NULL;
delete temp;
}
}

void del_at_pos(int k)
{
temp=head;
while(temp!=NULL)
{
if(temp->data==k)
{
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
}
temp=temp->next;
}
}

void search(int h)
{int c=0;
temp=head;
while(temp!=NULL)
{c++;
if(temp->data==h)
{
cout<<" thhis node os at position"<< "  "<<c;
break;
}
temp=temp->next;
}
if(c==0||temp==NULL)
cout<<"\n no node found!!!!!!!!!!!!";
}

void count()
{
int c=0;
temp=head;
while(temp!=NULL)
{c++;
temp=temp->next;
}
cout<<"\n no of nodes"<<"  "<<"is"<< "  "<<c;
}

void rev()
{node *save;
nptr=tail;
while(nptr!=head)
 {
temp=nptr->next;
nptr->next=nptr->prev;
if(nptr==tail)
nptr->prev=NULL;
else
nptr->prev=temp;
nptr=nptr->next;
 }
nptr->prev=nptr->next;
nptr->next=NULL;
head=nptr;
save=head;
head=tail;
tail=save;
delete save;
}
~doublelinklist()
{
for(node*p;head!=NULL;)
{
p=head->next;
delete head;
head=p;
}
delete p;
}
};
void main()
{clrscr();
doublelinklist ob;
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
cout<<"\n7.search any node";
cout<<"\n8.count number of modes";
cout<<"\n9.reverse the link list";
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
case 7:
cout<<"enter the node you want to serch"<<endl;
cin>>f;
ob.search(f);
break;
case 8 :
ob.count();
break;
case 9:
ob.rev();
ob.display();
break;
default:
cout<<"\nwrong input";
}
cout<<"\n enter y to do more actions"<<"  ";
cin>>ch;
}
getch();
}
