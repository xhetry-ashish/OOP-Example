#include<iostream>
using namespace std;

classs A
{
	public:
		int i;
};

class B : virtual public A
{
	public:
		int j;
};

class c: virtual public a
{
	public:
		int k;
};

class D: public B,public C
{
	public: 
	int sum;
};

int main ()
{
	D obj;
	obj.=10;
	obj.j=20;
	obj.k= 30;
	onj.sum = obj.i+obj.j+ obj.k;
	cout<<" vlaue of I : "<<obj.i;
	cout<<" value of J : "<<obj.sum;
	return 0;
}
