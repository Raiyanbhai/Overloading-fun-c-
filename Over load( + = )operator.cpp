#include <iostream>
using namespace std;
class Distance
{
	private:float inch,feet;
	public:Distance()
	      {
	      inch=0;
	      feet=0;
	      }
	      Distance(float i,float f)
	      {
	      inch=i;
	      feet=f;
	      }
	      void show()
	      {
	      cout<<"your distance is:"<<inch<<"'"<<feet<<"\''";
	      }
	      void operator +=(Distance d1)
	      {
	      inch +=d1.inch;
	      feet +=d1.feet;
	      }
};
int main()
{
Distance d1(4,5),d2(3,4);
d1 +=d2;
d1.show();
return 0;
}
