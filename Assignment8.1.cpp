#include<iostream>
#include <vector>
#include <list>
using namespace std;
class base {
	int x;
	vector<double> v;
  public:
	base(int y, vector<double> z): x {y}, v {z}{}
	int get_x()
	{
		return x;
	}
    vector<double> it_v()
    {
    	return v;
	}
};
class derived : public base {
list<bool> l;
public:
	derived(int y, vector<double> z):base(y,z){} // initializes an empty list
	derived(int y, vector<double> z, list<bool> el):base(y,z),l{el} {}
	void print()
	{
	  cout<<"1st int :"<<get_x()<<endl;	
	  cout<<"2nd vector :";
	for (double value : it_v()) {
      cout << value << " ";
    }
      cout<<endl;
	  cout<<"3rd bool :";
	for(bool m:l)  
	  cout<<(m?"true":"false")<<" ";
	  cout<<endl;
	}
};
int main()
{
derived d {10, {1.5, 2.5, 3.5}, {true, false}};
d.print();
}