#include<iostream.h>
#include<conio.h>
const int size = 50;
class  largenum
{int s[size];
int top;
long long n;
public:
 largenum()
 {
 n=0;
 top=-1;
 }
int carry()
{
int r;
r=n%10;
n=n/10;
return r;
}
void rev()
{ int h;
for(int i=0,j=top;i<=top/2;i++,j--)
{ h=s[i];
s[i]=s[j];
s[j]=h;
}
}
void display()
{
int t=0;
while(t!=top+1)
cout<<s[t++];
}
void insert()
{
cin>>n;
while(n>0)
{s[++top]=carry();
}
rev();
}
void add(largenum l1,largenum l2)
{int t1=l1.top,t2=l2.top,c=0,t;
while(t1!=-1&&t2!=-1)
{t=l1.s[t1--]+l2.s[t2--]+c;
c=t/10;
t=t%10;
this->s[top++]=t;
}
while(t2>=0)
{t=l2.s[t2--]+c;
c=t/10;
t=t%10;

this->s[++top]=t;
}
while(t1>=0)
{t=l1.s[t1--]+c;
c=t/10;
t=t%10;
this->s[++top]=t;
}
if(c>0)
this->s[++top]=c;
rev();
}
};
void main()
{largenum ob1,ob2,ob3;
cout<<"\n enter first number";
ob1.insert();
cout<<"\n enter second number";
ob2.insert();
ob1.display();
cout<<"+";
ob2.display();
ob3.add(ob1,ob2);
cout<<"=";
ob3.display();
getch();
}
