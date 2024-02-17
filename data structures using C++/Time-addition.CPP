#include<iostream.h>
#include<conio.h>
class time{
int hrs,mins,secs;
public:
void gettime();
void puttime();
time add(time);
};
void time::gettime(){
cout<<"Enter hours,mins,secs"<<endl;
cin>>hrs>>mins>>secs;
}
void time::puttime(){
cout<<hrs<<":"<<mins<<":"<<secs<<endl;
}
time time::add(time t)
{
time t1;
t1.secs=secs+t.secs;
t1.mins=t1.secs/60;
t1.secs=t1.secs%60;
t1.mins=mins+t.mins+t1.mins;
t1.hrs=t1.mins/60;
t1.mins=t1.mins%60;
t1.hrs=hrs+t.hrs+t1.hrs;
return t1;
}
int main(){
time a,b,c;
clrscr();
a.gettime();
b.gettime();
c=a.add(b);
a.puttime();
b.puttime();
c.puttime();
getch();
return 0;
}