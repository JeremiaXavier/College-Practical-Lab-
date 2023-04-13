#include<iostream.h>
#include<conio.h>
class distance{
int  km,meter;
public:
distance(){
km=meter=0;}
distance(float a,float b){
km=a;
meter=b;
}
void display(){
cout<<"KM:"<<km<<endl<<"Metre:"<<meter<<endl;
}
distance operator+(distance);
};
distance distance::operator+(distance p){
distance c;
c.km=km+p.km;
c.meter=meter+p.meter;
c.km=c.km+c.meter/1000;
c.meter=c.meter%1000;
return c;
}
void main(){
clrscr();
distance d1;
distance d2(2,2300);
distance d3(3,1000);
d1=d2+d3;
d1.display();
getch();
}