#include<iostream>
#include<fstream>
using namespace std;

class student
{
	int roll;
	char name[20];
	public:
		void input()
		{
			cout<<" Input roll and  name : "<<endl;
			cin>>roll;
			gets(name);
		}
		void display()
		{
			cout<<"Roll : "<<roll<<endl;
			cout<<" Name : ";
			puts(name);
		}
};

int main()
{
	ofstream outf("myfile.txt");
	student s1;
	s1.input();
	outf.write((char *)&s1,sizeof(s1));
	cout<<" write sucess"<<endl;
	outf.close();
	student s2;
	ifstream infile("myfile.txt");
	infile.read((char*)&s2,sizeof(s2));
	infile.close();
	s2.display();
	return 0;
}
