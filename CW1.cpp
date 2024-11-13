#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
   int sum=0,s=0;
   ifstream myfile("data.txt",ios::in);
   char x;
   while(myfile.get(x))
   {
     sum+=x;
   }
   cout<<sum;
}