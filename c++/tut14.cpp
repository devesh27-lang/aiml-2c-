#include<iostream>
using namespace std;
int main() {
    int n,a,b,c,d;
    cout<<"enter a three digit no"<<endl;
    cin>>n;
    a=n%10;
    n=n/10;
    b=n%10;
    c=n/10;
    d=a+b+c;
     cout<<d;



    return 0;
}