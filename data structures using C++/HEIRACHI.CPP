#include<iostream.h>
#include<conio.h>
class staff{
protected:
int staffid;
char name[20];
public:
void getstaff(){
cout<<"Enter id and name";
cin>>staffid>>name;
}
void putstaff(){
cout<<"Name:"<<name<<endl<<"ID:"<<staffid<<endl;
}
};
class teacher:public staff{
protected:
char subject[30];
char publication[40];
public:
void getteacher(){
getstaff();
cout<<"Enter subject and publication"<<endl;
cin>>subject>>publication;
putstaff();
cout<<"Subject:"<<subject<<endl<<"Publication:"<<publication<<endl;
}
};
class typist :public staff{
protected:
int typingspeed;
public:
void getspeed(){
getstaff();
cout<<"Typing Speed:";
cin>>typingspeed;
putspeed();
}
void putspeed(){
putstaff();
cout<<"Typing Speed:"<<typingspeed<<endl;
}
};
class officer: public staff{
protected:
char grade;
public:
void getdetails(){
getstaff();
cout<<"Enter grade"<<endl;
cin>>grade;
putgrade();
}
void putgrade(){
putstaff();
cout<<"Grade:"<<grade<<endl;
}};
void main(){
clrscr();
officer a;
a.getdetails();
teacher t;
t.getteacher();
typist ty;
ty.getspeed();
getch();
}