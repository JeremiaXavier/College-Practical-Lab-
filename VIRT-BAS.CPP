#include<iostream.h>
#include<conio.h>
class student{
protected:
int rno;
public:
void getno(){
cout<<"Enter Rollno:";
cin>>rno;}
void putno(){
cout<<"Rollno:"<<rno<<endl;
}
};
class test: virtual public student{
protected:
int m1,m2;
public:
void getmark(){
cout<<"Enter two marks:";
cin>>m1>>m2;
}
void putmark(){
cout<<"Mark 1:"<<m1<<endl<<"Mark 2:"<<m2<<endl;
}
};
class sports:virtual public student{
protected:
int score;
public:
void getscore(){
cout<<"Enter score in sports:";
cin>>score;
}
void putscore(){
cout<<"Score:"<<score<<endl;
}
};
class result:public test,public sports{
int total;
public:
void display(){
total=m1+m2+score;
putno();
putmark();
putscore();
cout<<"Total:"<<total;
}
};
void main(){
clrscr();
result p;
p.getno();
p.getmark();
p.getscore();
p.display();
getch();
}

