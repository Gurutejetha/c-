#include<iostream>
using namespace std;
 class addition
 {
 	public:
 		int sum(int a,int b)
 		{
 			return a+b;
		 }
 int sum(int a,int b,int c)
 {
 	return a+b+c;
 }
};
int main ()
{
addition obj;
cout<<"Sum of the two numbers is :"<<obj.sum(20,15)<<endl;
cout<<"Sum of the three numbers is :"<<obj.sum(20,30,27)<<endl;
return 0;
}
