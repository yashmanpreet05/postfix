#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack <int> s;
int main()
{
	string exp;
	cout<<"enter the expression :";
	cin>>exp;
	for(int i=0;i<exp.length();i++)
	{
		if(isdigit(exp[i]))
		s.push(exp[i]-'0');
		else{
			int op2=s.top();
			s.pop();
			int op1=s.top();
			s.pop();
			if(exp[i]=='+')
			s.push(op1+op2);
			else if(exp[i]=='-')
			s.push(op1-op2);
			else if(exp[i]=='*')
			s.push(op1*op2);
			else if(exp[i]=='/')
			s.push(op1/op2);
		}
	}
	cout<<"the result is:"<<s.top()<<endl;
	return 0;
}