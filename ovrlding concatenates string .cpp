#include <iostream>
#include <string.h>
using namespace std;
class Str
{
private:
       char a[20];
public:
       Str()
       {
       strcpy(a," ");
       }
       Str(char aa[])
       {
       strcpy(a,aa);
       }
       void getdata()
       {
       cout<<"Enter your fname:";
       cin>>a;
       cout<<"Enter your lname:";
       cin>>a;
       }
       void show()
       {
       cout<<"your concatenates name is: "<<a;
       }
       friend Str operator+(Str a1,Str a2);
};
Str operator+(Str a1,Str a2 )
{
Str temp;
strcpy(temp.a,a1.a);
strcat(temp.a,a2.a);
return temp;
}
int main()
{
Str a1,a2,a3;//a1("Raiyan"),a2("khan"),a3;
a1.getdata();
a3=a1+a1;
a3.show();
return 0;
}  
