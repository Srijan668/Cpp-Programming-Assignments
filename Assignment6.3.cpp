#include<iostream>

using namespace std;
struct X
{
X(){cout << "default constructor\n";};
X(X&& x){ cout << "move constructor\n";};
X(const X&x){cout << "copy constructor\n";};
constexpr X& operator=(const X&){cout << "copy assignment\n"; return *this;};
~X(){cout << "Destructor\n";};
};
X foo(X x){
return x;
}
int main()
{
X obj;
obj = foo(obj);
}
/*OUTPUT
default constructor
copy constructor
move constructor
copy assignment
Destructor
Destructor
Destructor

Here at first when obj is declared,default constructor is called
then for foo(obj) copy constructor is called
then At the time of returning foo, move constructor is called
then foo(obj) is assigned to obj,i.e. here copy assignment works
at last at the end of main(),copy constructor and move constructor destructor is called;
