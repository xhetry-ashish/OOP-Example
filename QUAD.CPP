#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a,b,c;
	float r1,r2;
	cout<<"input coefficients no = ";
	cin>>a>>b>>c;
	r1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	r2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	cout<<"\n Root 1= "<<r1;
	cout<<"\n Root 2= "<<r2;
	getch();
}
