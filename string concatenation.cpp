#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class str
{
	char s[100];
	public:
		void input()
		{
			cout<<"input name : ";
			cin>>s;
		}
		void display()
		{
			cout<<"\n "<<s;
		 }  
		 str operator +(str s2)
		 {
		 	str temp;
		 	strcpy(temp.s,strcat(s,s2.s));
		 	return temp;
		 }
};

int main ()
{
	str s1,s2,s3;
	s1.input();
	s2.input();
	s1.display();
	s2.display();
	s3= s1+s2;
	cout<<"\n after concatenation :   ";
	s3.display();
	return 0;
}
