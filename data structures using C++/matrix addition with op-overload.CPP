#include<iostream.h>
#include<conio.h>
#define r 3
#define c 3
class matrices{
int a[20][20];
public:
void readmatrics(){
cout<<"Enter matrices"<<endl;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cin>>a[i][j];
}}
}
void getresult(){
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cout<<"\t"<<a[i][j];
}cout<<endl;
}
}
friend matrices operator+(matrices,matrices);
};
matrices operator+(matrices p,matrices q){
matrices z;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
z.a[i][j]=p.a[i][j]+q.a[i][j];
}
};
return z;
};
void main(){
clrscr();
matrices a1,b1,c1;
a1.readmatrics();
b1.readmatrics();
c1=a1+b1;
c1.getresult();
getch();

}
