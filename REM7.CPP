
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b;
	void multiply(int a,int b);
	cout<<"\n Input range number";
	cin>>a>>b;
	multiply(a,b);
	getch();
}

void multiply(int a,int b)
{
	for (int j=a;j<=b;j++)
	{

		for (int i=1;i<=10;i++)
		{
			int c=i*j;
			if (i==7||j==7)
			{
				continue;
			}
			else
			{
			cout<<j<<"*"<<i<<"="<<c;
			cout<<"\n";
			}
		}
	}
}