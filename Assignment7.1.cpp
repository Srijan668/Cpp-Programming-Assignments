#include<iostream>
using namespace std;
struct X{
  int i;
  X(int n): i(n){};
  X operator+(int n){return X(n+i);};
};
struct Y{
  int i;
  Y operator+(X x){return Y(X(x.i+i));};
  operator int(){return i;};
  Y(X x): i(x.i){};
};
ostream& operator<<(ostream& os,Y y)
{
  os<<y.i<<endl;
  return os;
}
extern X operator*(X x,Y y){return X(x.i*y.i);};
extern int f(X x){return x.i;};

X x=1;
Y y=x;
int i=2;

int main() {
  cout<<i + 10<< "\n"<<y + X(10)<< y + X(10) * y<<endl;//int to X type conversion is happening 
  cout<<x + y + i<<"\n" <<x * x + i<< f(7)<<endl;// X to Y type conversion is happening 
  cout<<f(X(y))<<"\n"<< y + y<<"\n"<< 106 + y<<endl;// int type is stored in Y.& Y type to X type conversion is happening.
}
