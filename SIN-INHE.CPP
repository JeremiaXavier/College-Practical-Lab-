//record
#include<iostream.h>
#include<conio.h>
class A{
int a;
public:
int b;
void get(){
cout<<"Enter 2 no\n";
cin>>a>>b;
}
int geta(){
return a;
}
void show(){
cout<<"a="<<geta()<<endl<<"b="<<b<<endl;
}
};
class D:public A{
int c;
public:
void mul(){
c=geta()*b;
}
void display(){
cout<<"Result:"<<c<<endl;
}
};
void main(){
clrscr();
D d;
d.get();
d.mul();
d.show();
d.display();
d.b=20;
d.mul();
d.display();
getch();
}