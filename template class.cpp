#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

template <class t1,class t2>
class sample
{
	t1 a;
	t2 b;
	public:
		void getdata()
		{
			cout<<"\n enter a and  b : ";
			cin>>a>>b;
		}
		void display()
		{
			cout<<" \n displaying values : "<<a<<" "<<b;
		}
};

int main()
{
	sample<int,int> s1;
	sample<int, char> s2;
	sample <int, float>s3;
	cout<<" two int data : ";
	s1.getdata();
	s1.display();
	cout<<" \n int and char data : ";
	s2.getdata();
	s2.display();
	cout<<" \n int and  float data : ";
	s3.getdata();
	s3.display();
	return 0;
}
