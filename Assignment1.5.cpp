#include<iostream>
#include<math.h>
int main()
{
	int k,m;
	float n,nn,p;
	std::cout<<"enter the number";
	std::cin>>n;
	std::cout<<"enter the kth place ";
	std::cin>>k;
	nn=n*k;
	nn=nn+0.5;
	m=(int)nn;
	p=(float)m/k;
	std::cout<<"the ans is "<<p<<"\n";
	return 0;
}
