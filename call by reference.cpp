#include<iostream>
using namespace std;

int main ()
{
	int m,n;
	void swap(int &a,int &b);
	cout<<"input 2 no: ";
	cin>>m>>n;
	swap(m,n);
	cout<<m;
	cout<<"\n"<<n;
	return 0;
}

void swap(int &a,int &b)
{
	int t=a; 
	a=b;
	b=t;
}
