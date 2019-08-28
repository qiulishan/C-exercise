#include "iostream"
using namespace std;
#define pi 3.14
void roundness_acreage_c(void);

class roundness
{
public:
	double m_s;//member varible
	double m_r;
public:
	void setR(double r)
	{
		m_r = r;
	}
	double getR(void)
	{
		return m_r;
	}
	double m_areage(double r)//member function
	{
		m_s = pi*m_r*m_r;
		return m_s;
	}
};

void namesapace_test(void);
void valueswap1(int& a,int& b);
void valueswap2(int*a,int*b);
int& quote_as_func_left_value(void);
int no_quote_as_func(void);
int pointer_quote_allocate_fun(int *&p);
int pointer_quote_free_fun(int *&p);
void default_func_param(int x = 1,int y = 2);
int fun_overload(int a);
int fun_overload(int *p);
void fun_overload(int a,int b);











