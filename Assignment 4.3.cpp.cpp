#include<iostream>
const char* createString()
{
   return "Practice makes a man perfect";
}
int * createInt()
{
   int x=100;
   //static int x=100;//to obtain correct result modify int x to static int x ,as a result its lifetime is not ended here.
   return &x;
}
int main()
{
  const char *str=createString();
  std::cout<<"String ="<<str<<std::endl;
  int *ip=createInt();
  std::cout<<"integer ="<<*ip<<std::endl;
  return 0;
}
//In the output we get warning during compilation as integer x in function createInt() is local to that function only and hence its scope and lifetime ends within that function which leads to segmentation fault during execution while called in main function.

//As string literals are of static type by default so their lifetime doesnot end within the braces where defined.Hence we get the desired output as calling the function createString() in main functin is valid.
