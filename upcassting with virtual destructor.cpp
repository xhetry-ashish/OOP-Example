#include<iostream>
using namespace std;

class base 
{
	public:
	 virtual ~base ()
		{
			cout<<"base destructor is called "<<endl;
		}
};

class derived:public base
{
	public:
		~derived()
		{
			cout<<"derived destructor is called "<<endl;
		}
};

int main ()
{
	base *b=new derived;
	delete b; //upcasting
	return 0;
}

