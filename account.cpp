#include<iostream>

using namespace std;

class account 
{
	int accno;
	int amount;
	public:
		void input ()
		{
			cout<<"enter acc no"<<endl;
			cin>>accno;
			cout<<"enter balance"<<endl;
			cin>>amount;
		}
		
		void display()
		{
			cout<<"acc no"<<accno;
			cout<<endl<<"Balance"<<amount;
		}
		void transfer(account &amd,int & money)
		{
			amount= amount - money;
			amd.amount=amd.amount+money;
		}
};

int main()
{
	account acc1,acc2;
	acc1.input();
	acc2.input();
	acc1.display();
	acc2.display();
	int amt;
	cout<<"Enter amount to transfer"<<endl;
	cin>>amt;
	acc2.transfer(acc1,amt);
	cout<<"update";
	acc1.display();
	acc2.display();
	return 0;
}
