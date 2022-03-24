// program to overload of using this operator(<) and compare with two object 
#include<iostream>
using namespace std;
class Distance
{
	private:
	        float feet,inches;
	public:
	       Distance()
	       {
	       	feet=6;
	       	inches=7;
	       	}
	       	Distance(float f,float i)
	       	{
	       	feet=f;
	        inches=i;
	       }
	       void shsowdata()
	       {
	       	cout<<feet<<"'"<<inches<<"\""<<endl;
	       }
friend bool operator<(Distance d1,Distance d2);
};
bool operator<(Distance d1,Distance d2)
{
	float value1=d1.feet*12+d1.inches;
	float value2=d2.feet*12+d2.inches;
	if(value1 < value2)
	return true;
	else
	return false;
}
int main()
{ 
	Distance s1(8,8);
	Distance s2(6,8);
	cout<< (s1<s2) <<endl;
	return 0;
}
