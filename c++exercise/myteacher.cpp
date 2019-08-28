#include "myteacher.h"
#include "iostream"
using namespace std;
void myteacher::set_age(int age)
{
	m_age = age;
}
int myteacher::get_age(void)
{
	return m_age;
}

void cube::set_len_wid_high(double a, double b, double c)
{
	m_length = a;
	m_width = b;
	m_hight = c;
}
double cube::get_surface_acreage(void)
{
	return 2*(m_length*m_width + m_hight*m_width + m_length*m_hight);
}

double cube::get_volume(void )
{
	return m_length*m_width*m_hight;
}

double cube::get_hight(void)
{
	return m_hight;
}
double cube::get_length(void)
{
	return m_length;
}
double cube::get_width(void)
{
	return m_width;
}

int cube::judge_same_cube(cube &v)
{
	if(m_length==v.m_length && m_width==v.m_width && m_hight==v.m_hight)
	{
		cout<<"in same judge"<<endl;
		return 0;
	}
	else
	{
		cout<<"in different judge "<<endl;
		return -1;
	}
}


