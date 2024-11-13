#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
   ifstream myfile("data.txt",ios::in);
   ofstream myfiles("Cw_11nov.1.txt",ios::out|ios::trunc);
   char x;
   while (myfile.get(x))
   {
     myfiles<<x;
   }
}