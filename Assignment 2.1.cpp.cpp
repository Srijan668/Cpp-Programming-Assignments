void fun(char* ,int& );//a function takes argument of pointer to char and reference 3to integer and returns no value

typedef void (*tag)(char*,int&);
tag fun1=&fun;//a pointer to such a function

void fun2(tag f);//a function taking such a pointer as an argument


tag fun3()
{
	return fun;//a function returning such a pointer
}


tag fun4(tag t)
{
	return t; //a function takes a pointer as an argument and returns its argument as the value.
}
