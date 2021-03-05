#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,i,b,j, flag=0;
	cout<<"\n Input any no : ";
	cin>>a>>b;
	for (i=a;i<b;i++)
	{
	   for (j=2;j<b;j++)
	   {
		if(j%i==0)
		{
		   cout<<j<<"\n";
	       }
	   }
	}

	getch();
}