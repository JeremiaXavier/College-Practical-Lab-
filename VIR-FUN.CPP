
//Virtual functions//

#include<iostream.h>
#include<conio.h>
class BC
{
public:
virtual void dis(){
cout<<"Display base\n";
}
virtual void show(){
cout<<"Show base\n";
}
};
class DC:public BC{
public:
void dis(){
cout<<"Display derived\n";
}
void show(){
cout<<"Show derived\n";
}
};
int main(){
clrscr();
BC b;
DC d;
BC*bptr;
bptr=&b;
bptr->dis();
bptr->show();
bptr=&d;
bptr->dis();
bptr->show();
getch();
return 0;
}