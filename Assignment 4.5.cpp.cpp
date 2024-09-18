#include<iostream>
void swap1(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void swap2(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
int main()
{
	int a,b,c,d;
	std::cout<<"enter numbers";
	std::cin>>a>>b;
	swap1(&a,&b);
	std::cout<<"\nans for swap1->"<<a<<" "<<b;
	std::cout<<"\nenter numbers c,d";
	std::cin>>c>>d;
	swap2(c,d);
	std::cout<<"\nans for swap2->"<<c<<" "<<d;
}
