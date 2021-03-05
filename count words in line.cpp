#include<iostream> 
#include<conio.h> 
using namespace std;

int main() 
{ 
	
	char line[80], c; 
 	int i=0, j=1; 
 	cout<<"Enter the sentence:"<<endl; 
 	gets(line); 
 	cout<<"You have entered:"<<endl; 
 	puts(line); 
 	
 	while((c=(line[i++]))!='.') 
 	{
  		if(c==' ') 
  		j=j+1; 
 	} 
 	cout<<j<<endl; 
	getch(); 
} 
 
