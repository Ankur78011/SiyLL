#include<iostream.h>
#include<conio.h>
const int_size=10;
int count_nonleaf=0;
int count_leaf=0;
class node
{public:
int info;
node* left;
npde*right;
}*root=NULL;

class stack
{
node*s[size],*n;
int top;
public:
stack()
{top=-1;}
void push(node*ele)
{top++;
s[top]=ele;
}
node*stack::pop()
{n=s[top];
top--;
return n;
}
class queue
{node*a[size],*n;
int front,rear;
public:
queue()
{front=rear=0;}
void enqueue(node*ele)
{if(rear=-1)
{front=rear=0;}
else if(rear==size-1&&front>0)
{rear=0;}
else
rear++;
a[rear]=ele;
}
node* dequeue()
{n=a[front]
if(front=rear)
{front=rear=-1;}
else if{front==size-1)
{front=0;
}
else
front=0;
return n;
}
class bst
{node *p,*q,p1;
void insert()
{int data;
cout<<"enter the node value and 0 tp terminate";
cin>>data;
while(data!=0)
{if (root=NULL)
{root=new node;
root->left=0;
root->right=0;
root->info=data;
}
else
{p=root;
q=new node;
q->left=0;
q->right=0;
q->info=data;
while(p!=0)
{if(data<p->info)
  {p1=p;
  p=p->left;
	}
else
{if(data>p->info)
	{p1=p;
	p=p->right  ;
	}
}
}
if(data<p1->info)
{p1->left=q;}
else
{p1->right=q;
}
cout<<"\n enter node value or 0 to terminate";
cin>>i;
}
void recursive_inorder(node*temp)
if(temp!=0)
{recursive_inorder(temp->left);
cout<<temp->info<<" ";
recursive_inorder(temp->right);
}
void recursive_preorder(node *temp)
{if(temp!=0)
{cour<<temp->info<<" " ;
recursive_preordwer(temp->left);
recursive_preorder(temp->right);
}
}
void recursive_postorder(node *temp)
{if(temp!=0)
{recursive_postorder(temp->left);
recursive_postorder(temp->right);
cout<<temp->info;
}
}











