#include<iostream>
using namespace std;

class bird 
{
	public:
		virtual void eat()
		{
			cout<<" Birds eat something "<<endl;
		}
};

class parrot : public bird
{
	public: 
	  void eat()
	  {
	  	cout<<" Parrot eat maize "<<endl;
	  }
};

class vulture : public bird
{
	public: 
		void eat()
	    { 
	      cout<<" Vulture eat meat "<<endl;
		}
};

int main ()
{
	bird *b1 = new parrot() ;
	b1->eat();
	bird *b2= new vulture() ;
	b2->eat();
	return 0;
}
