#include<iostream.h>
#include<conio.h>
class hotel
{
public:
void hotel1()
{
cout<<"\n\n\t\t\t***** Welcome To Hotel SK *****";
}
};
class facilities : public hotel
{

public:
void fac1()
{
cout<<"\n\n\t\t\t ** Facilities **";
cout<<"\n\n1.Room \n2.Club \n3.Food Escort";
}
};
class room : public facilities
{
public:
int rch,ch;
room()
{
hotel1();
fac1();
cout<<"\n\nEnter 1 for ac room.\nPress 2 for non Ac room"<<endl;
cin>>ch;
if(ch==1)
{
rch=1000;
}
else if(ch==2)
{
rch=700;
}
cout<<"\n Room Charges="<<rch;
}
};
class club
{
public:
int cchr,cch;
club()
{
cout<<"\n\nEnter 1 for choosing club facility: ";
cin>>cch;
if(cch==1)
{
cchr=2000;
}
else
{
cchr=0;
}
cout<<"\n Club ChargesL: "<<cchr;
}
};
class food
{
public:
int fchr,fch;
food()
{
cout<<"\n\nEnter 1 for Food facility: ";
cin>>fch;
if(fch==1)
{
fchr=500;
}
else
{
fchr=0;
}
cout<<"\nFood Charges: "<<fchr;
}
};
class tc: public room , public club ,public food
{
int tc,n;
public:
void cal()
{
cout<<"\n\nEnter no. of persons: ";
cin>>n;
tc=(rch+cchr+fchr)*n;
cout<<"\n\n**** Total cost is:  "<<tc;
}
};
void main()
{
clrscr();
//room m;
tc t;

t.cal();
getch();
}

