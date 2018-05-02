#include<iostream.h>
#include<conio.h>
class len
{
public:
int l;
void get()
{
cout<<"Enter length of cuboid: ";
cin>>l;
}
};
class bre
{
public:
int b;
void input()
{
cout<<"\nEnter breadth of cuboid: ";
cin>>b;
}
};
class height
{
public:
int h;
void inpu()
{
cout<<"\nEnter Height of cuboid: ";
cin>>h;
}
};
class area: public len,public bre, public height
{
int ar;
public:
void are()
{
ar=l*b*h;
cout<<"\n Area of cuboid is : "<<ar;
}
};
void main()
{
area a;
a.get();
a.input();
a.inpu();
a.are();
getch();
}
