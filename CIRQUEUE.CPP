
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
const int size=10;
int q[size];
int front=-1,rear=-1;
void insert(int q[],int ele)
{if((front==0&&rear==size-1)||(front==rear+1))
exit(1);
else if(rear==-1)
{
front=rear=0;
 }
else if(rear==size-1)
rear=0;
else
rear++;
q[rear] =ele;
}
 int del(int q[])
 {int ret;
 if(front==-1)
 exit(1);
 else
 {
 ret=q[front];
 if(front==rear)
 front=rear=-1;
 else if(front==size-1)
 front=0;
 else
 front++;
 }
 return ret;
 }

 void display(int q[])
 {
 int i=0;
 cout<<"\n circular queue is";
 if(front==-1)
 exit(1);
 if(rear>=front)
 {for(i=0;i<front;i++)
 cout<<"-";
 cout<<">>>";
 for(i=front;i<=rear;i++)
 cout<<q[i];
 cout<<"-";
 }
 else
 {for(i=0;i<=rear;i++)
 cout<<q[i]<<"-";
 for(;i<front;i++)
 cout<<"-";
 cout<<">>>";
 for(i=front;i<size;i++)
 cout<<q[i]<<"-";
 cout<<"\n wrap around";
 }
 }
 void main()
 {int item,res,ch;
 clrscr();
 do{ cout<<"\n menu";
 cout<<"\n1. insert";
 cout<<"\n 2.delete";
 cout<<"\n 3.display";
 cout<<"\n 4exit";
 cout<<"\n enter your choice";
 cin>>ch;
 switch(ch)
 {case 1: cout<<"enter item for insertion";
	  cin>>item;
	  insert(q,item);
	  display(q);
	  break;
    case 2:item=del(q);
	     cout<<"element del is "<<item<<endl;
	     display(q);
	     break;
  case 3:display(q);
	      break;
	      case 4: break;
	      default :cout<<"\n wrong input";
		    break;
		    }
		    }
		    while(ch!=4);
		    getch();
		    }



