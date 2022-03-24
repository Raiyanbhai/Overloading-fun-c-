#include <iostream>
using namespace std;
class Distance
{
private:float x,y;
public:Distance()
       {
       x=0;
       y=0;
       }
       Distance(float xx,float yy)
       {
       x=xx;
       y=yy;
       }
       void show()
       {
       cout<<"your distance is : "<<x<<"'  "<<y<<"''";
       }
       void operator-=(Distance d1)
       {
       x-=d1.x;
       y-=d1.y;
       }
};
int main()
{
Distance d1(2,4),d2(5,3);
d1-=d2;
d1.show();
return 0;
}