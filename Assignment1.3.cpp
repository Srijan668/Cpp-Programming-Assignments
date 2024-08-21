#include<iostream>
int main()
{
 char vowel1,vowel2,vowel3,vowel4,vowel5,capvowel1,capvowel2,capvowel3,capvowel4,capvowel5;
  std::cout<<"ent vowels \n";
  std::cin>>vowel1>>vowel2>>vowel3>>vowel4>>vowel5;
 float a,b,c,d;
  a=vowel2-vowel1;//it is valied
  b=vowel5-vowel2;
  std::cout<<"\nthe ans is"<< a<<"\n";
  std::cout<<"ent capvowels \n";
  std::cin>>capvowel1>>capvowel2>>capvowel3>>capvowel4>>capvowel5;
 float e;
  e=capvowel2-capvowel1;
  std::cout<<"\nthe ans is"<< e<<"\n";
 if(a==e)
  std::cout<<"the ans is same";
}
/*THE ANS IS SAME BECAUSE THE PROGRAM DO THE OPERATIONS BETWEEN THE ASCII VALUES OF VOWELS.
AS EX vowel2-vowel1=ascii value of e-ascii value of a=101-97=4.
    for capvowel2-capvowel1=ascii value of E-ascii value of A=69-65=4.*/
