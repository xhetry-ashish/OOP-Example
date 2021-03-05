#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,i, flag=0;
	cout<<"\n Input any no : ";
	cin>>a;
	for (i=2;i<a;i++)
	{
	  if(a%i==0)
	  {
	   flag=1;
	  }
	}
	if (flag==0)
	{
	  cout<<"\n It is prime";
	}
	else
	{
	 cout<<"\n Itis composite";
	}
	getch();
}