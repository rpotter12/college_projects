/* Develop a mini project illustrating the use of all operators by writing functions of each category
 *  (such as arithmetic, logical, relational, bitwise category wise). */
#include<iostream>
using namespace std;
void arithmatic(int a, int b)
{
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
	cout<<a<<"-"<<b<<"="<<a-b<<endl;
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
	cout<<a<<"/"<<b<<"="<<a/b<<endl;
	cout<<a<<"%"<<b<<"="<<a%b<<endl;
	cout<<"\n\n";
}
void logical(int a,int b,int c)
{
	cout<<"use of && operator by printing greatest number"<<endl;
	if(a>b && a>c)
		cout<<a<<endl;
	else if(b>a && b>c)
		cout<<b<<endl;
	else if(c>a && c>b)
		cout<<c<<endl;
	if(a>b || a>c || c>a)
		cout<<" || operator is called"<<endl;
    cout<<"\n\n";
}
void relational(int a,int b)
{
	cout<<"use of < operator"<<endl;
	cout<<"smallest number"<<endl;
	if(a<b)
		cout<<a<<endl;
	else
		cout<<b<<endl;
	cout<<"use of > operator"<<endl;
	cout<<"greatest number"<<endl;
	if(a>b)
		cout<<a<<endl;
	else
		cout<<b<<endl;
	cout<<"use of == operator"<<endl;
	if(a==b)
		cout<<"same"<<endl;
	else
		cout<<"not same"<<endl;
	cout<<"use of != operator"<<endl;
	if(a!=b)
		cout<<"not equal"<<endl;
	else
		cout<<"equal"<<endl;
    cout<<"\n\n";
}
void bitwise(int a,int b)
{
    int c;
    c=a^b;
	cout<<a<<"^"<<b<<"="<<c<<endl;
	c=a&b;
	cout<<a<<"&"<<b<<"="<<c<<endl;
	c=a|b;
	cout<<a<<"|"<<b<<"="<<c<<endl;
	cout<<"\n\n";
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	arithmatic(a,b);
	logical(a,b,c);
	relational(a,b);
	bitwise(a,b);
	return 0;
}
