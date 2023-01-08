//to count number of objects created from a class using concept of static data member and static member function
#include <iostream>
using namespace std;
class Test
{
    int i;
    static int count;
    public:
        void test()
        {
            count++;
        }
        void test(int k)
        {
            i=k;
            count++;
        }
        static void print()
        {
            cout<<""<<count;
        }
};
int Test::count;
int main()
{
    Test a,b,c;
    a.print();
    cout<<"\n";
    b.print();
    cout<<"\n";
    c.print();
    cout<<"\n";
    a.test(250);
    b.test(350);
    c.test(450);
    cout<<"after executing:\n";
    a.print();
    cout<<"\n";
    b.print();
    cout<<"\n";
    c.print();
    cout<<"\n";
    return 0;
}