/*WAP in C++ to create a class “student” having private data
members as student name, age, roll_number and average marks. Input
all the details from keyboard and initialize the object at the time
of its creation. Copy one object instances to another by calling a
user defined copy constructor. Also enter the details of another one
student and find out the highest average scorer using friend
function.
*/
#include <iostream>
#include <cstring>
using namespace std;
class student
{
    int age, roll,avg;
    char *str *s_marks;
    public:
    int n;
    student()
    {
        char arr[20];
        cout << "Enter name : " << endl;
        cin >> arr;
        int length = strlen(arr);
        str = new char[length];
        strcpy(str,arr);
        cout << "Enter roll : ";
        cin >> roll;
        cout << "Enter age" << endl;
        cin >> age;
        cout << "Enter no. of subjects: " << endl;
        cin >> n;
        int *s_marks;
        s_marks = new int[n];
        cout << "Enter " << n << " subject marks" << endl;
        for(int i = 0; i < n; i++)
        {
            cin >> s_marks[i];
        }
        int temp;
        for(int i=0;i<n;i++)
        temp+=s_marks[i];
        avg=temp/n;
    }
    
    student getdata(char *s,int a, int r, int av)
    {
        strcpy(str,s);
        age=a;
        roll=r;
        avg=av;
    }

    student display()
    {
    student(const student &a)
    {
        this->str=new char[strlen(a.str)+1];
        strcpy(this->str,a.str);
        age=a.age;
        roll=a.roll;
        avg=a.avg;
    }
};

int main()
{
    student s1;
    student s2(s1);
    student s3;
    student result= average(s1,s3);
    ans.display();
    return 0;
}