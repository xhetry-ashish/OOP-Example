#include<iostream>
#include<conio.h> 
using namespace std;


class student 
{ 
	protected: 
 	float  sum, avg; 
 	char name[20];
 	public: 
 		student() 
 		{
 			cout<<"Enter name :"<<endl; 
  			cin>>name; 
 		} 	
 		
};
 
class computer : public student 
{ 
	float IT, cprog, networks; 
 	public: 
 	void getcomputerdata() 
 	{
  		cout<<"Enter marks in IT:"<<endl; 
  		cin>>IT; 
  		cout<<"Enter marks in cprog:"<<endl; 
  		cin>>cprog; 
  		cout<<"Enter marks in networks:"<<endl; 
  		cin>>networks; 
	 }	 
		 
 	void average() 
 	{ 
 		sum=IT+cprog+networks; 
  		avg=sum/3; 
  		cout<<"Average marks of "<<name<<" is : "<<avg<<endl; 
 	} 
}; 

class mathematics:public student 
{ 
	float calculus, stat, algebra; 
	public: 
 	void getmathdata() 
 	{	 
 		cout<<"Enter marks in calculus:"<<endl; 
  		cin>>calculus; 
  		cout<<"Enter marks in statistics:"<<endl; 
  		cin>>stat; 
  		cout<<"Enter marks in Linear Algebra:"<<endl; 
  		cin>>algebra; 
 } 
 void average() 
 	{ 	
 	sum=calculus+stat+algebra; 
  	avg=sum/3; 
  	cout<<"Average marks of "<< name <<" is : "<<avg; 
 	} 
}; 

int main() 
{ 
	computer C; 
	mathematics M; 
 	cout<<"Enter marks of computer students:"<<endl; 
 	//C.getstudentdata(); 
 	C.getcomputerdata(); 
 	cout<<"Enter marks of mathematics student:"<<endl; 
 //	M.getstudentdata(); 
	M.getmathdata(); 
 	C.average();
 	M.average(); 
 	return 1; 
}
