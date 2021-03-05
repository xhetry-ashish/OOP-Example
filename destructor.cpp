#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	public:
		test()
		{
			cout<<"constructor\n";
		}
		~test()
		{
			cout<<"destructor\n";
		}
		
};
int main ()
{
	
		test t;
	
	cout<<"main termainting\n";
}
