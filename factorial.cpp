#include<iostream>
using namespace std;

class demo
{
	int x;
	public:
	void read_no()
	{
		
		cout<<" Input any number : ";
		cin>>x;
	}

		long int factorial(int x)
		{
			if (x<1)
			{
			    return 1;		
			}
			else
			{
				return(x*factorial(x-1));
			}
		}
		
		
		
};

int main()
{
	int x;
	demo d;
	 d.read_no();
	cout<<" factorial is : "<<d.factorial(x);
}
