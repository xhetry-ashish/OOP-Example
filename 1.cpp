#include<iostream>
#include<conio.h> 
using namespace std;


class student 
{ 
	protected: 
 	float english, sum, avg; 

 	public: 
		int a,b,c;
 		student() 
 	{
  		cout<<"Enter marks in 1st subject:"<<endl; 
  		cin>>a; 
  		cout<<"Enter marks in 2nd sub:"<<endl; 
  		cin>>b; 
  		cout<<"Enter marks in 3rd subject:"<<endl; 
  		cin>>c; 
	 }	 
 		
};
 
class computer : public student 
{ 
	float IT, cprog, networks; 
 	public: 	 
 	void average() 
 	{ 
 		sum=english+IT+cprog+networks; 
  		avg=sum/4; 
  		cout<<"Average marks is"<<avg; 
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
 	sum=english+calculus+stat+algebra; 
  	avg=sum/4; 
  	cout<<"Average marks is"<<avg; 
 	} 
}; 

int main() 
{ 
	computer C; 
	mathematics M; 
 	cout<<"Enter marks of computer students:"<<endl; 
 //	C.getstudentdata(); 
 //	C.getcomputerdata(); 
 	cout<<"Enter marks of mathematics student:"<<endl; 
 //	M.getstudentdata(); 
	M.getmathdata(); 
 	C.average();
 	M.average(); 
 	return 1; 
}
