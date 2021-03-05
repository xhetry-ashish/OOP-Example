#include<iostream>
using namespace std;

int main ()
{
	int m,n;
	
	cout<<"input 2 no: ";
	cin>>m>>n;
    cout<< swap(m,n);
	return 1;
}

inline int & swap(int &a,int &b)
{
	if (a>b)
	return a;
	else
	return b;
}
