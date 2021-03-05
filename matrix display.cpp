#include<iostream>
using namespace std;
class base
{
		int **mat,**sum;
		int row,col;
		public:
			base()
			{
				int row,col;
				cout<<"Input row and column : ";
				cin>>row>>col;	
			}
			base(int r,int c)
			{
				row=r;
				col=c;
				mat=new int*[row];
				for(int i=0;i<row;i++)
				{
					mat[i]=new int [col];
				}
			}
			int **input()
			{
				for(int i=0;i<row;i++)
				{
					for(int j=0;j<col;j++)
					{
						cin>>mat[i][j];
					}
				}
				return mat;
			}

		void display(int**a)
		{
			for(int i=0;i<row;i++)
				{
					for(int j=0;j<col;j++)
					{
						cout<<"\t"<<a[i][j];
					}
					cout<<endl;
				}
		}
		~ base()
		{ 
			int **a;
			for (int i=0;i<row;i++)
			{
				delete[] a[i];
			}
			delete []a;
		}
};

int main()
{
	base m;
	int **a;
	int row,col;
	base(row,col);
	cout<<"\n Input elements : ";
	a=m.input();
	m.display(a);
	return 0;
	
}
