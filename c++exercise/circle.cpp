#include "all.h"


void roundness_acreage_c(void)
{
	double r;
	double s;
	cout<<"input the radius of the circle"<<endl;
	cin>>r;
	s = pi*r*r;
	cout<<"the acreage is:"<<s<<endl;

}
namespace namespaceA
{
	int a = 10;
	namespace namespaceB
	{
		int b;
		struct teacher
		{
			int age;
			char name[20];
		};
	}
}
struct student
{
	int age; //4
	char name[20];//20
	char &a;
	char &b; //why we can define it
};
namespace namespaceD
{
	int a = 100;
}
void namesapace_test(void)
{
	// if we don't use the "using namespace, we need to use std:: explicit"
	std::cout<<"my dick is so big"<<std::endl;
	using namespace namespaceA;
	using namespace namespaceD;
	//a = 10;
	cout<<namespaceA::a<<endl;
	cout<<namespaceD::a<<endl;

	// whty do we need the struct?
	//student s1;
	//s1.age = 1;
	cout<<"s1's size is :"<<sizeof(student)<<endl;
	namespaceA::namespaceB::teacher t1;
	using namespaceA::namespaceB::teacher;
	int a = 1;
	int b = 2;
	(a < b)?a:b = 30;
	cout<<"a = "<<((a < b)?a:b = 30)<<endl;

	int &quote = a;
	quote = 100;//modify quota amount to modify a;
	cout<<"quote = "<<quote<<endl;
	cout<<"a = "<<a<<endl;
}
void valueswap1(int& a,int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
}
void valueswap2(int *a,int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int no_quote_as_func(void)
{
	static int a;
	cout<<"a's address is" <<&a<<endl;
	a++;
	return a;
}

int& quote_as_func_left_value(void)
{
	static int a;
	a++;
	cout<<"quote a's address is" <<&a<<endl;
	cout<<"quote a's value is" <<a<<endl;
	return a;
}




