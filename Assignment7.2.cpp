#include<iostream>
using namespace std;
int k=0;
class Tiny {
	char v;
	void assign(int i){if(i&~077) throw Bad_range(); v = i;}
	public:
	 class Bad_range{};
	/* To be completed */
	Tiny(int n) {
		assign(n);
	}
	Tiny operator=(Tiny t){
		if(k&~077)
	 	{
	 		k=0;
	 		throw Bad_range();
		 }
	 	else
	     v=t.v;
	}
	int operator=(int n)
	{
		v=n;
	}
	Tiny operator+(Tiny t){
	 	int m=v+t.v;
	 	if(m&~077)
	 	{
	 		k=m;
		 }
	 	else
	 	return(m);
	 }
	 Tiny operator-(Tiny t){
	 	int m=v-t.v;
	 	if(m&~077)
	 	k=m;
	 	else
	 	return(m);
	 }
	 Tiny operator-(int n){
	 	int m=v-n;
	 	if(m&~077)
	 	k=m;
	 	else
	 	return(m);
	 }
	 int print()
	 {
	 	return v;
	 }
	 operator int() const { return v; }

};
ostream& operator<<(ostream& os,Tiny t){
	os<<t.print()<<endl;}
/* Example of Tiny objects mixing with ints in arithmetic expressions */
int main(){
Tiny c1 = 2; // Perform range check
Tiny c2 = 62; // perform range check
Tiny c3 = c2 - c1; // c3 = 60;
Tiny c4 = c3; // no range check required
c1 = c1 + c2; // range error: c1 can’t be 64
int i = c1 + c2; // i = 64
i = c3 - 64; //i = -4
c2 = c3 - 64; // range error: c2 can’t be -4
c3 = c4; // no range check required
}
