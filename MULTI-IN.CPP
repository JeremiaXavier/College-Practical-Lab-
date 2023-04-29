#include<iostream.h>
#include<conio.h>
class M
{
protected:
int m;
public:
void getm(){
cout<<"Enter m\n";
cin>>m;
}
};
class N
{
protected:
int n;
public:
void getn(){
cout<<"Enter n \n";
cin>>n;
}
};
class P:public M,public N
{
int p;
public:
void dis(){
p=m*n;
cout<<"M:"<<m<<endl<<"N:"<<n<<endl<<"P:"<<p;
}
};
void main(){
clrscr();
P p;
p.getm();
p.getn();
p.dis();
getch();
}