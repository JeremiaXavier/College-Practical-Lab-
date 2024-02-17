#include<iostream.h>
#include<conio.h>
class rectangle{
float length,breadth;
public:
rectangle(int a){
cout<<"Area:"<<a*a<<endl;
}
rectangle(int a,int b){
cout<<"Area:"<<a*b<<endl;
}
};
void main(){
clrscr();
rectangle(2);
rectangle(2,3);
getch();
}
