
//constructors in derived class
#include<iostream.h>
#include<conio.h>
class alpha{
int x;
public:
alpha(int i){
cout<<"Alpha initialised\n";
x=i;
}
void display(){
cout<<"X:"<<x;
}
};
class beta{
float y;
public:
beta(int j){
cout<<"beta initialized\n" ;
y=j;
}
void dis(){
cout<<y;
}
};
class gamma:public beta,public alpha{
int m;
public:
gamma(int a,float b,int c):alpha(a),beta(b){
m=c;
cout<<"Gamma initialiased\n";
}
};
int main(){
clrscr();
gamma(1,12.34,50);
getch();
return 0;
}