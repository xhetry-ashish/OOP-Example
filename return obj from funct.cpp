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
	student get()
	{
		student s1;
		s1.roll= 1;
		strcpy(s1.name,"Rameshwor");
		return s1;
	}	
};

int main()
{
	student s;
	test t;
	s=t.get();
	cout<<"roll no:- "<<s.roll;
	cout<<"\nName :-"<<s.name;
	return 0;
}
