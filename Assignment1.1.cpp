#include<iostream>
int main()
{
  int x,y,d,w;
  std::cout<<"enter days"<<"\n";
  std::cin>>x;
  y=x/365;
  d=x%365;
  w=d/7;
  d=d%7;
  std::cout<< y <<" years "<< w <<" weeks "<< d <<" days "<<"\n";
  return 0; 
}
