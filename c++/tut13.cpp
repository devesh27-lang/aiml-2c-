#include<iostream>
using namespace std;
int main()
{
    int x;
     cout<<"enter the no";
     cin>>x;
    (x%2==0)?((x>=0)?((x==0)?cout<<"it is zero":cout<<"even positive"):cout<<"even negative"):((x<=0)?((x==0)?cout<<"it is zero":cout<<"odd negative"):cout<<"odd positive");
    

    return 0;
}