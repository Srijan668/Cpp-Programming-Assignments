#include<iostream>
using namespace std;
struct foo{
   foo(){cout << "foo()\n" ;}//constructor
   ~foo(){cout <<"~foo()\n";}//destructor
   int i {5};
};
struct obj{
   const foo& getFoo(){return my_foo;};
   foo my_foo;
};
int main()
{
obj *o = new obj();
const foo& val = o->getFoo();
 cout << "val.i=" << val.i << std::endl;
delete o;
 cout << "val.i=" << val.i << std::endl;
}
/*OUTPUT
foo()
val.i=5
~foo()
val.i=1726784
Here when we create new obj it calls default constructor at the time of declear my_foo.Then i=5 is printed.Then When o is deleted the pointed object obj by o is
deleted so my_foo is also destructed as a result ~foo() is called.
But after this Destruction, we try to call a reference of destructed object whic leads to garbage value of val.i. 
*/
