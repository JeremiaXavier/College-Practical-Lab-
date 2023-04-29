//this pointer
#include<iostream.h>
#include<conio.h>
class person{
char name[10];
int age;
public:
void read(){
cout<<"Enter name & age\n";
cin>>name>>age;
}
person greater(person x){
if(x.age>=age)
return x;
else
return *this;
}
void dis(){
cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
}
};
int main(){
person p,p1;
clrscr();
p.read();
p1.read();
person p2=p.greater(p1);
cout<<"Greater person\n";
p2.dis();
getch();
return 0;
}