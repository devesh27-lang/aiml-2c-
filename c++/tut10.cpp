#include<iostream>
 using namespace std;
  int main() {
    int a,b ;
    cout<<"enter two no"<<endl;
    cin>>a>>b;
    cout<<"before swapping value of a,b"<<a<<""<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping value of a,b"<<a<<""<<b<<endl;

    return 0;
                }