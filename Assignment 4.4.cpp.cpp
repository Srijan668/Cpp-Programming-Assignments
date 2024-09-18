#include<iostream>
#include"rough.cpp"// in this file I define f
int main()
{
  char str[]="India vs pakistan, Asia Cup 2023";
  str[7]='V';
  double darr[] ={2.3, 4.5, 5.5};
  *(darr+3)=6.5;
  extern float f;
  float g=f*100.5;
  short int i=89;
  void *v=&i;
  short int *ip=static_cast<int*>(v);
  std::cout<<"integer ="<<*ip;
}
//In C++ string literals are not immutable as a result we cannot modify the string pointed by str[7]='V',to get correct output we should make *str to str[]

//f is not define here so compiler can't calculate g using f,To make it correct we should define somewhere. 

//
