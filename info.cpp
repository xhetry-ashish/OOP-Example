#include<iostream>
#include<conio.h>
using namespace std;
	class student 
	{
		int rn;
		char name[40];
		char adrs[10];
		public:
		
		void input()
		{
			cout<<"\n Enter roll no : ";
	 		cin>>rn;
	 		cout<<"\n Enter name : ";
	 		cin>>name;
	 		cout<<"\n Enter address : ";
	 		cin>> adrs;
		}

		void display()
		{
			cout<<"\n Roll no : " <<rn;
	 		cout<<"\n Name : " <<name;
	 		cout<<"\n Address : " <<adrs;
		}
	};
	
	int main()
	{
		int i;
		cout<<"\n Input information of 2 students\n";
		student info[2];
		 for (i=0;i<=1;i++)
		 {
	   		info[i].input();
	 	
		 }
	 	for (i=0;i<=1;i++)
		 {
	 		info[i].display();
		}
			return 0;
	getch();
	}

	 
	 
	
	 


