#include<iostream>
using namespace std;
 class person
 {
 	public:
 		string name;
 		int age;
 		string gender;
 };
 int main()
 {
   person p1;
   p1.name="srija";
   p1.age=19;	
   p1.gender="female";
   cout<< "Name :"<<p1.name<<endl;
   cout<<"Age :"<<p1.age<<endl;
   cout<<"Gender :"<<p1.gender<<endl;
   return 0;
 }
