#include<iostream>
int main()
{
 float x,y;
 std::cout<<"enter the y";
 std::cin>>y;
 x=y-20*6/9;
 std::cout<<"x="<<x<<"\n";
 //FOR Y=1 X=-12 .IT IS NOT THE EXPECTED ANS
 x=y-20.0*6.0/9.0;
 std::cout<<"CORRECT x="<<x<<"\n";
 // FOR Y=1 X=-12.3333
return 0;
}
