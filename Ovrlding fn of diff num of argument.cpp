//Function overloading program of different number of argument.

#include <iostream>
using namespace std;
float avg(float x,float y)
{
	return(x+y);
}
float avg(float x,float y,float z)
{
	return (x+y+z);
}
int main()
{
	int a,b,c;
	cout<<"Enter any first number : ";
	cin>>a;
	cout<<"Enter any second number : ";
	cin>>b;
	cout<<"Enter any third number : ";
	cin>>c;
	cout<<endl;
	cout<<endl;
	cout<<"(\"";
	cout<<"Enter any first  two numberof add is :["<<avg(a,b)<<"]"<<endl;
	cout<<"Enter any second three numberof add is :["<<avg(a,b,c)<<"]";
	cout<<"\")";
	return 0;
}