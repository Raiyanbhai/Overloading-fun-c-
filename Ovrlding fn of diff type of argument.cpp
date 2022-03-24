
//Function overloading program of different Types of argument.

#include <iostream>
using namespace std;
float add(float x,int y)
{
	return(x+y);
}
string add(string x,string y)
{
		return(x+y);
}
int main()
{
	int a=3,b=6;
    cout<<add(a,b)<<endl;
	string c="Raiyan",d="khan";
	cout<<add(c,d)<<endl;
	

	return 0;
}