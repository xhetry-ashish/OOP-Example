#include<iostream>
using namespace std;

class vehicle  //abstract base class
{
	 protected:
		int t= 30;
		float a= 20.5;
		
		public:
			virtual void spec()=0; //pure virtual function
};

class car: public vehicle
{
	public:
		void spec()
		{
			cout<<" speed = "<<t<<endl;
			cout<<" milege = "<<a<<endl;
			cout<<" this is child class ";
		}
		
};

int  main()
{
	vehicle *b= new car;
	b->spec();
	return 0;
}
