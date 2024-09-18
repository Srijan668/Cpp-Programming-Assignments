#include<iostream>
char c='A';
char *d=&c;//pointer to character
int a[10]={1,2,3,4,5,6,7,8,9,10};//array of 10 intigers
int (&r)[10]=a;//reference to an array of 10 integers
const char*str[]={"I","am","Srijan"};//Array of Character Strings
const char *(*str1)[3]=&str;//pointer to an array of character strings
char **str2=&d;//pointer to a pointer to character
const int a=4;//constant integer
const int *m=&a;//pointer to a constant integer
int i=4;
int* const j=&i;//constant pointer to an integer
const double z=7.6635;
const double *const x=&z;//constant pointer to a constant double

