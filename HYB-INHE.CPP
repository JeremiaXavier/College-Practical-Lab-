#include<iostream.h>
#include<conio.h>
class student{
protected:
int rno;
public:
void getno(){
cout<<"Enter Rollno:";
cin>>rno;
}
void putno(){
cout<<"Rollno:"<<rno<<endl;
}
};
class test:public student{
protected:
int m1,m2;
public:
void getm(){
cout<<"Enter two marks:";
cin>>m1>>m2;
}
void putm(){
cout<<"Mark 1:"<<m1<<endl<<"Mark 2:"<<m2<<endl;
}
};
class sports{
protected:
int score;
public:
void getscore(){
cout<<"Enter the score:";
cin>>score;
}
void putscore(){
cout<<"Score:"<<score<<endl;
}
};
class result: public test,public sports{
int total;
public:
void display(){
total=m1+m2+score;
putno();
putm();
putscore();
cout<<total;
}
};
void main(){
clrscr();
result p;
p.getno();
p.getm();
p.getscore();
p.display();
getch();
}