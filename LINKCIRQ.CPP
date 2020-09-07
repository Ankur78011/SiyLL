#include<iostream.h>
#include<conio.h>
class queue
{struct node
{int data;
node *next;
}*front,*rear;
public:
int isempty()
{
if(front==NULL&&rear==NULL)
return 1;
return 0;
}
void enqueue(int a)
{node *temp;
temp=new node;
temp->data=a;
temp->next=NULL;
if(isempty())
{
front=rear=temp;
rear->next=front;
}
else
{
rear->next=temp;
rear=temp;
rear->next=front;
}
}
void dequeue()
{node *ptr;
ptr=front;
if(isempty())
{cout<<"\n queue is empty";
}
else if(front==rear)
{front=rear=NULL;
delete ptr;
}
}
void display()
{node*ptr;
ptr=front;
if(isempty())
{
cout<<"\n queue is empety";
}
else
{
while(ptr->next!=front)
{cout<<ptr->data<<"\n";
ptr=ptr->next;
}
cout<<ptr->data;
}
}
};
void main()
{ queue q;
clrscr();
int ch,b;
cout<<"\n 1.enqueue";
cout<<"\n2.dequeue";
cout<<"\n 3.display";
do
{
cout<<"enter your  choice"<<endl;
cin>>ch;
switch(ch)
{case 1:cout<<"\n enqueu";
	cout<<"\n enter element to be entered";
	cin>>b;
	q.enqueue(b);
	break;
case 2: cout<<"\n de queue";
	  q.dequeue();
	  break;
 case 3: cout<<"\n doisplayu";
	 q.display();

default: cout<<"\n invlid input";
}
}
while(ch!=0);
getch();
}

