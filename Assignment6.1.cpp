#include<iostream>
using namespace std;
class myvector {
int *p; // base pointer of the vector
unsigned int size; // size of the vector
bool shallow;
//flag indicating whether this is a shallow copy of another myvector
public:
/*create an empty vector */
myvector(){
  size=0;
  p=nullptr;
};
/* create a vector of length size initialized to 0 */
myvector(unsigned int n){
 size=n;
 p=new int[n];
 shallow = true;
 for(unsigned int i=0;i<=n-1;i++)
 {
    p[i]=0;
 }
}
/*copy constructor. Can be shallow or deep depending on the option */
myvector(myvector& v, bool shallow=true)
{
   size=v.size;
   shallow = v.shallow;
   if(shallow){
      p=v.p;
   }
   else
   {
      p=new int[size];
      for(unsigned int i=0;i<size;i++)
         p[i]=v.p[i];
   }
}
/* return the base pointer to the vector */
int* get_ptr() const{
   return p;
}
/* return the size of the vector */
constexpr unsigned int get_size() const{
   return size;
}
/* Return the shallow flag */
bool is_shallow() const{
   return shallow;
}
/*update the element at index i with val*/
void update(unsigned int i, int val){
   if(i<size)
    p[i]=val;
}
/*return the element at index i*/
constexpr int get(unsigned int i) const{
   return p[i];
}
/*print the vector contents in the console */
void print() const{
    for(unsigned int i=0;i<size;i++)
       cout<<p[i];
}
/*Expand the vector and insert a new value at the end.*/
void push_back(int val)
{
   size=size+1;
   int *p1=new int[size];
   for(unsigned int i=0;i<size;i++)
   {
     if(i<size-1)
       p1[i]=p[i];
     else
       p1[i]=val;    
   }
 
   //delete[] p;myvector::~myvector() ()

   p = p1;
}
~myvector()
{
   if(!shallow)
   delete[] p;
}
};
int main(){
myvector x(7); /*create a vector of size 7 initialized all to 0 */
for (unsigned int i=0;i<7;i++)
x.update(i,10+5*i);
myvector v{x}; // shallow copy
v.update(1,100);
v.print();
// print the contents of x and verify that x has also changed on updating v.
x.print();
myvector y {x,false}; // deep copy
y.update(1,200);
y.print();
// print the contents of x and verify that x has NOT changed on updating y.
x.print();
// push_back 500 on y and verify
y.push_back(500);
y.print();
return 0;
}


