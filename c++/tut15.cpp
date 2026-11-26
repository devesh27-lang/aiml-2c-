/*#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter a two digit number"<<endl;
    cin>>a;
    (a%10==a/10)?cout<<"palindrome":cout<<"not palindrome";



    return 0;
}*/
/*#include<iostream>
using  namespace std;
int main() {
    int a;
    cout<<"enter a three digit number"<<endl;
    cin>>a;
    (a%10==a/100)?cout<<"palindrome":cout<<"not palindrome";



    return 0;
                 }
*/
/*#include<iostream>
using namespace std;
int main() {
  int n,a,b,c,d;
  cout<<"enter a four digit number "<<endl;
  cin>>n;
  a=n/1000;
  b=(n/100)%10;
  c=(n/10)%10;
  d=n%10;
  (a==d&&b==c)?cout<<"palindrome":cout<<"not palindrome";



    return 0;
}*/
/*#include<iostream>
using namespace std;
int main () {
    int a,b;
    cout<<"enter two no"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<endl<<b;


    return 0;
                 }*/
#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter two no "<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<b;



    return 0;
}                