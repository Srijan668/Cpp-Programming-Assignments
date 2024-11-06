#include<iostream>
using namespace std;
class Base {
	public:
    	virtual void iam(){cout << "Base\n";}
};
class D1:public Base{
	public:
		void iam(){ cout<<"d1\n";}
};
class D2:public Base{
	public:
		void iam(){ cout<<"d2\n";}
};
void print(Base* bptr){bptr->iam();}
int main(){
	Base b;D1 d1; D2 d2;
	print(&b); print(&d1); print(&d2);
}
