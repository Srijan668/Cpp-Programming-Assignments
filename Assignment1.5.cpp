#include<iostream>
#include<math.h>
int main()
{
	long int k,m;
	long double n,nn,p;
	std::cout<<"enter the number";
	std::cin>>n;
	std::cout<<"enter the kth place ";
	std::cin>>k;
	nn=n*k;
	nn=nn+0.5;
	m=(long int)nn;
	p=(long double)m/k;
	std::cout<<std::fixed;
	std::cout<<"the ans is "<<p<<"\n";
	return 0;
}
