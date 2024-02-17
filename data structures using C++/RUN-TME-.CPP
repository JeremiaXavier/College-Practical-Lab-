#include<iostream.h>
#include<conio.h>
#include<string.h>
class media{
protected:
char title[50];
float price;
public:
media(char *s,float a){
strcpy(title,s) ;
price=a;}
virtual void display(){}
};
class book:public media{
int pages;
public:
book(char*s,float a,int p):media(s,a){
pages=p;
}
void display(){
cout<<"\t\t\nTitle:"<<title<<endl<<"Pages:"<<pages<<endl<<"Price:"<<price<<endl;
}
};
class tape:public media{
float time;
public:
tape(char*s,float a,float t):media(s,a){
time=t;
}
void display(){
cout<<"\t\t\nTitle:"<<title<<endl<<"Price:"<<price<<endl<<"TIme:"<<time<<endl;
}
};
void main(){
clrscr();
char *title=new char[20];
float price,time;
int pages;
cout<<"Enter Titlr:";
cin>>title;
cout<<"\n Enter Price:";
cin>>price;
cout<<"\n Enter pages:";
cin>>pages;
book book1(title,price,pages);
cout<<"\nEnter Title:";
cin>>title;
cout<<"\n Enter price:";
cin>>price;
cout<<"\n Enter Time:";
cin>>time;
tape tape1(title,price,time);
media*list[2];
list[0]=&book1;
list[1]=&tape1;
list[0]->display();
list[1]->display();
getch();
}