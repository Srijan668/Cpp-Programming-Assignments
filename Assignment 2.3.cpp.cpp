#include<iostream>
//Using Global variable
int c=0;
int add(int a,int b)
{
	int add=a+b;
	c=c+1;
	return add;
}
//Using Static Local Variable
int mult(int a,int b,int &count)
{
	static int n=0;
	n++;
	count=n;
	int mult=a*b;
	return mult ;
}
int main()
{
	int a=1,b=2,m=0,k=0,n=0;
	//for global variable
	for(int i=1;i<=10;i++)
	m+=add(a,b);
	std::cout<<"sum is "<<m<<"\n"<<"the fun is called "<<c<<" times"<<"\n";
	//for static local variable
	for(int i=1;i<=10;i++)
	{
	 k=k+mult(a,b,n);
    }
	std::cout<<"sum is "<<k<<"\n"<<"the fun is called "<<n<<" times"<<"\n";
}
/*Using Static Local variable is the more appropriate choice.Because in this case we can change the count only inside function
but in global varible c can be changed anywhere.

We can't use local variable because in this case after terminating the function the value of counter will be erased and next time when 
the function will be called again the counter's value turns into 0 again.*/
