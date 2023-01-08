//wap to take a time in hh:mm in a class,include all the constructors
#include <iostream>
using namespace std;
class time
{
    int hour;
    int min;
    public:
    time (int h,int m=0)
    {
        hour=h;
        min=m;
    }
    void display()
    {
        cout<<hour<<"hours"<<min<<"mintutes"<<endl;
    }
};

int main()
{
    time t1(4), t2(4,45);
    t1.display();
    t2.display();
}