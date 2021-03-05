#include<iostream>
using namespace std;
class base
{
	protected:
		int **mat,**sum;
		int row,col;
		public:
			void memaloc(int r,int c)
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
};

class operation: public base
{
	public:
		int **add(int **a,int **b)
		{
			sum=mat;
			for(int i=0;i<row;i++)
				{
					for(int j=0;j<col;j++)
					{
						sum[i][j]=a[i][j]+b[i][j];
					}
				}
				return sum;
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
};

int main()
{
	operation m;
	int **a,**b,**c;
	int row,col;
	cout<<"Input row and column : ";
	cin>>row>>col;
	m.memaloc(row,col);
	cout<<"\n Input elements : ";
	a=m.input();
//	m.memaloc(row,col);
	cout<<"\n Input elements : ";
	b=m.input();
	c=m.add(a,b);
	m.display(c);
	return 0;
	
}
