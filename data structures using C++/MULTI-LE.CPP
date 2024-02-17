#include<iostream.h>
#include<conio.h>
class student
{
protected:
int rno;
public:
void getm(){
cout<<"Enter Rollno\n";
cin>>rno;
}
void putm(){
cout<<"Rollno="<<rno<<endl;
}
};
class test:public student{
protected:
int m1,m2;
public:
void getn(){
cout<<"Enter 2 marks\n";
cin>>m1>>m2;
}
void putn(){
cout<<"Mark 1:"<<m1<<endl<<"Mark 2:"<<m2<<endl;
}
};
class P:public test{
int p;
public:
void dis(){
p=m1+m2;
putm();
putn();
cout<<"Total mark:"<<p<<endl;
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