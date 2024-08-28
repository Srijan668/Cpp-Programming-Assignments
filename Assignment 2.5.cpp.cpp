3#include<iostream>
void f1(int m[][5],int dim1)
{
	for(unsigned int i=0;i<dim1;i++)
	  for(unsigned int j=0;j<5;j++)
	   m[i][j]=m[i][j]+2;
}
int main()
{
	int m[3][5] {{1,2,3,4,5},{11,12,13,14,15},{21,22,23,34,25}};
	f1(m,3);
	for(unsigned int i=0;i<3;i++)
	{
		for(unsigned int j=0;j<5;j++)
	     std::cout<<m[i][j]<<" ";
	    std::cout<<"\n"; 
	}
}
/*OUTPUT
3 4 5 6 7
13 14 15 16 17
23 4 25 36 27
it takes input as 1 2 3 4 5
                 11 12 13 14 15
				 21 22 23 24 25
and add 2 with each element.

It is valid.
2d array takes input row-wise. so if the number of element is known to the compiler then the row numbers maintains automaticaly*/			 

