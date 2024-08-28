#include<iostream>
typedef int (&rifii) (int,int);
int add(int a,int b)
{
	return a+b;
}
int main()
{
rifii refadd=add;
int result=refadd(3,4);
std::cout<<result;
}
/*typedef creats a allias,'rifii' for this reference of function type.
Using typedef the program can be more readable,
if we use this it will be easy to make a change in arguments.*/


