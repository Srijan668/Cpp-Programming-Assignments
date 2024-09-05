#include<iostream>
#include<string>
#include<ctype.h>
#include"revwords.h"
#include"REVWORDS.cpp"
int main()
{
  char str[500];
  gets(str);
  std::cout<<"REVERSE:: ";
  reverse_words(str);
}

