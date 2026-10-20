#include<iostream>
using namespace std;
  int main() {
    int a,b,c;
    cout<<"enter two value";
    cin>>a>>b;
    cout<<"before swaping \n"<<a<<"\n"<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping \n"<<a<<"\n"<<b;

    return 0;

  }