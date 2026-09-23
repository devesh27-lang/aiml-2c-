#include<iostream>

using namespace std;

int c = 45;

 int main() {
   // int a,b,c;
    //cout<<"enter the value of a:"<<endl;
   // cin>>a;
   // cout<<"enter the value of b:"<<endl;
   // cin>>b;
   // c = a+b;
   // cout<<"the sum is "<<c<<endl;
    //cout<<"the global c is"<<::c;
//:: this is scope resolution operator
// size of literals (float,double, long double)
// size of double is 8
// size of float is 4
// size of long double is 12
  //  float d = 34.4f;
   // long double e = 34.4l;
   // cout<<"the value of d is"<<d<<endl<<"the vale of e is"<<e;
//************reference variables************   
// Rohan das--> Monty --> rohu -->dangerous coder
/*float x = 455;
float y=x;
cout<<x<<endl;
cout<<y<<endl;*/
//*******TYPEcasting*********
int a=45;
float b= 45.46;
cout<<"the value of a is"<<(float)a<<endl;
cout<<"the value of a is"<<float(a)<<endl;

cout<<"the value of b is"<<(int)b<<endl;
cout<<"the value of b is"<<int(b)<<endl;
int c= int(b);

cout<<"the expression is"<<a+b<<endl;
cout<<"the expression is"<<a+int(b)<<endl;
cout<<"the expression is"<<a+(int)b<<endl;

    return 0;
 }