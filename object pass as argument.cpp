#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		int roll;
		char name[20];
		
};
class test
{
	public:
		void operation(student s)
		{
			cout<<"\nRoll : "<<s.roll;
			cout<<"\nName : "<<s.name;
		}
};
int main()
{
 	student s1;
	 s1.roll=1;
	 strcpy(s1.name,"Ram");
	 test t;
	 t.operation(s1);
	 return 0;
}
