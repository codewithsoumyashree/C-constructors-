#include<iostream>
#include <cstring>
using namespace std;

class string1
{
	char *str;
	int l;
	public:
		string1()
		{
			str= new char;
			l=0;
		}
		string1(char *s,int n)
		{
			l=n;
			str= new char[l+1];
			strcpy(str,s);
		}
		void display()
		{
			cout<<str<<endl;
		}
		void concatenate(string1 o1,string1 o2)
		{
			cout<<"the concatenated string : "<<o1.str<<o2.str<<endl;
		}
};

int main()
{
   string1 s1("Soumya",20),s2("Sahoo",20),s3;
   s1.display();
   s2.display();
   s3.concatenate(s1,s2);
   return 0;
}