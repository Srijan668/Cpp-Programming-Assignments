#include<iostream>
int main()
{
	const char* str1="We love C++ programming\n";
	char str2[100];
	char *p=str2;/*name of an array is implicitly converted to pointer to the first element.*/
	while(*p++=*str1++){}
	std::cout<<str2;
}
/*Here p is a ointer initialized to point the 1st element of str2.In thr loop It assign The Current Character from str1 to the Current location in str2 then p and str1 point to the next memory location.The loop runs until '/0'
is found.After the loop terminated The output of str2 is  "We love C++ programming\n".
