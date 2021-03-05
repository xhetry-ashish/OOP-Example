#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a;
	void multiply(int a);
	cout<<"\n Input any number";
	cin>>a;
	multiply(a);
	getch();
}

void multiply(int a)
{
	for (int i=1;i<=10;i++)
	{
		if (i==7||a==7)
		{
			continue;
		}
		else
		{
		   int	c=a*i;
			cout<<a<<"*"<<i<<"="<<c;
			cout<<"\n";
		}
	}
}
