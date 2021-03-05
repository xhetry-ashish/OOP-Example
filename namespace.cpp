#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

namespace first
{
	class one
	{
		public:
			void show()
			{
				cout<<"first"<<endl;
			}
	};
}
namespace second
{
	class two
	{
		public:
			void show()
			{
				cout<<"second"<<endl;
			}
	};
}

int main ()
{  
	cout<<" using scope resolution "<<endl;
	first::one a;
	second::two b;
	a.show();
	b.show();

	cout<<"using directive"<<endl;
	using namespace first;
	using namespace second;
	one obj1;
	two obj2;
	obj1.show();
	obj2.show();
	return 0;
}

