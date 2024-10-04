#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Expr{
	private:
		string expression;
	   int precedence(char o)
	   {
	   	if(o=='+'||o=='-')
	   	return 1;
	   	else if(o=='*'||o=='/')
	   	return 2;
	   	else
	   	return 0;
	   }
	   int prcd(char u,char v)
	   {
	   	if(precedence(u)>precedence(v))
	   	return 1;
	   	else
	   	return 0;
	   }
	   int evalute(char op,int a,int b)
	   {
	    switch(op)
	    {
	    	case '+':
	    		return a+b;
	    	case '-':
			    return a-b;
			case '*':
			    return a*b;
			case '/':
			if(b==0)
			cout<<"can't divide by 0 \n";
			else
		   return a/b;	
		}
	   }
	   int evalute_exp(const string s){
	   	stack<int> inti;
	   	stack<char> ops;
	   	for (int i=0;i<s.length();i++)
	   	{
	   	    if(s[i]==' ')
	   	    continue; 
	   		else if(s[i]>='0'&&s[i]<='9') 
	   		inti.push((int)(s[i]-48));
	   		else{
	   			while(!ops.empty()&&prcd(ops.top(),s[i])){
	   				int v2=inti.top();
	   				inti.pop();
	   				int v1=inti.top();
	   				inti.pop();
	   				char op=ops.top();
	   				ops.pop();
	   				inti.push(evalute(op,v1,v2));
				}
				ops.push(s[i]);
			}
		}
		while(!ops.empty())
		{
			int v2=inti.top();
	   		inti.pop();
	   		int v1=inti.top();
	   		inti.pop();
	   		char op=ops.top();
	   		ops.pop();
	   		inti.push(evalute(op,v1,v2));
		}
		return inti.top();
	   }
	public:
	    Expr(const char* expr){
	    	expression =string(expr);
		}
		int eval() 
		{
			return evalute_exp(expression);
		}  
		void print()
		{
			cout<<expression<<"\n";
		}
};
int main()
{
	Expr x("8 /4+3*4-3");
	cout<<"x="<<x.eval()<<"\n";
	x.print();
}
