#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,i,c;
	cout<<"\n Input any no : ";
	cin>>a;
	for (i=1;i<=10;i++)
	{
	 c=a*i;
	 cout<<a<<"*"<<i<<"="<<c<<"\n";
	}
	getch();
}