#include<iostream.h>
#include<conio.h>
class circularlinklist
{
public:
struct node
{
int data;
node *next;
}*head,*tail,*temp,*ptr,*nptr;

void create(int n)
{ptr=new node;
ptr->data=n;
ptr->next=NULL;
}

void display()
{
if(head==NULL)
cout<<"\n link  list empty";
else
{
cout<<"\n your link list is";
temp=head;
while(temp!=NULL)
{cout<<temp->data;
temp=temp->next;
}
}
}

circularlinklist()
{head=NULL;
tail=NULL;
}

void insert_at_beg()
{
if(head==NULL)
head=tail=ptr;
else
{
 ptr->next=head;
 head=ptr;
 tail->next=head;
 }
 }

 void insert_at_end()
 {
 if(tail==NULL)
 head=tail=ptr;
 else
 {
 tail->next=ptr;
 tail=ptr;
 tail->next=head;
 }
 }

 void insert_at_pos(int i)
 {int c=0;
 temp=head;
 while (temp!=NULL)
 {c=c+1;
 if(c==i-1)
 break;
 temp=temp->next;
 }
 ptr->next=temp->next;
 temp->next=ptr;
 tail->next=head;
 }

 void del_at_beg()
 {
 if(head=NULL)
 cout<<"\n link list is empty";
 else if
 (head==tail)
 {
 nptr=head;
 delete nptr;
 head=tail=NULL;
 }
 else
 {temp=head;
 head=temp->next;
 tail->next=head;
 delete temp;
 }
 }

 void del_at_end()
 {
 if(tail==NULL)
 cout<<"\n linklist is already empty";
 else if
 (head==tail)
 {nptr=head;
 delete nptr;
 head=tail=NULL;
 }
 else
 {
 temp=head;
 while(temp->next!=tail)
 temp=temp->next;
 temp->next=NULL;
 tail=temp;
 }
 }

 void del_at_pos(int g)
 {
 node *save ;
 nptr=head;
 temp=head;
 while(temp!=NULL)
 {
 if(temp->data==g)
 {while(nptr->next!=temp)
  nptr=nptr->next;
  nptr->next=temp->next;
  save=temp;
  delete save;
  break;
  }
  temp->next=head;
  temp=temp->next;
  }
  }
 void search(int ser)
 {int c=0;
 temp=head;
 while(temp!=NULL)
 {
 c++;
if(temp->data==ser)
{
cout<<"\n position of node is "<<"  "<<c;
break;
}
temp=temp->next;
}
if(ser==0||temp==NULL)
cout<<"\n node does not exixts";
}

void count()
{int c=0;
temp=head;
while(temp!=NULL)
{c++;
temp=temp->next;
}
cout<<"\n number of nodes"<<"  " <<c;
}

void rev()
{
node *save;
temp=head;
nptr=tail;
while(temp!=nptr)
 {
    if(temp->next==nptr)
      {
       nptr->next=temp;
       nptr=head;
       temp=head;
       continue;
	}
temp=temp->next;
 }
if(nptr==head)
temp->next=NULL;
temp=head;
head=tail;
tail=temp;
}
};
void main()
{clrscr();
circularlinklist ob;
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
