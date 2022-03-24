#include<iostream>
using namespace std;
class Distance
{
	private:float inch,feet;
	public:Distance():inch(0),feet(0){}
	       Distance(float i,float f):inch(i),feet(f){}
	       void show()
	       {cout<<"your distance is "<<inch<<"and"<<feet<<endl;
	       	}
	friend Distance operator +(Distance ,Distance);
};
 Distance operator +(Distance d,Distance d1)
{
	Distance temp;
	temp.inch=d.inch+d1.inch;
	temp.feet=d.feet+d1.feet;
	return temp;
}
int main()
{
	Distance d(4,5);
	Distance d2, d1(2,3);
	d2=d+d1;
	d2.show();
	return 0;
}
