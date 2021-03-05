#include<iostream> 
#include<conio.h> 
using namespace std;

int main() 
{ 
	
	char line[80], c; 
 	int i, j=1,k=0; 
 	cout<<"Enter the sentence:"<<endl; 
 	gets(line); 
 	cout<<"You have entered:"<<endl; 
 	puts(line); 
 	
 	for (i=0;line[i]!='\0';i++)
 	{
 		if (line[i]==' ')
 		 {j=j+1;}
 		 else 
		  {k=k+1;}
	 }
 	cout<<"No of words are : "<<j<<endl;
	 cout<<"No of letters are : "<<k<<endl; 
	getch(); 
} 
 
