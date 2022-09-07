#include<iostream>
using namespace std ;
int main ()
{
string a,b;
cout<< "enter your name\n";
cin>>a;
cout<<"reenter your name\n";
cin>>b;
if(a==b)
{
cout<<"valid user name\n";
}
else
{
cout<<"invalid user name\n";
}
return 0;
}
