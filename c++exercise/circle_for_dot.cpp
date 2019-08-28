#include "circle_for_dot.h"
#include "iostream"
using namespace std;
void dot::set_xy(double x,double y)
{
	d_x = x;
	d_y = y;
}
double dot::get_x(void)
{
	return d_x;
}
double dot::get_y(void)
{
	return d_y;
}

double dot::get_two_dot_distance_square(dot &d)
{
	return (d.d_x-d_x)*(d.d_x-d_x)+(d.d_y-d_y)*(d.d_y-d_y);
}

int circles::judge_dot_is_in_circle(dot &d)
{
	double dot_distance_squared;
	double dx;
	double dy;
	double cx;
	double cy;
	dx = d.get_x();
	dy = d.get_y();
	cx = cir_center.get_x();
	cy = cir_center.get_y();
	dot_distance_squared = (dx-cx)*(dx-cy)+(dy-cy)*(dy-cy);
	if(dot_distance_squared < cir_r*cir_r)
	{
		cout<<"This is in cirle's inside"<<endl;
	}
	else if(dot_distance_squared > cir_r*cir_r)
	{
		cout<<"This is on cirle's outside"<<endl;
	}
	else
	{
		cout<<"This is in the circumference"<<endl;
	}
	return 0;
}
void circles::set_circle_r(double r)
{
	cir_r = r;
}
double circles::get_r(void)
{
	return cir_r;
}
int circles::judghe_two_circle_is_intersect(circles &c)
{
	double d = c.cir_center.get_two_dot_distance_square(cir_center);
	if(d < (cir_r + c.cir_r)*(cir_r + c.cir_r))
	{
		cout<<"the two circle's ubiety are intersectant!"<<endl;
	}
	else if(d > (cir_r + c.cir_r)*(cir_r + c.cir_r))
	{
		cout<<"the two circle's ubiety are disjoint!"<<endl;
	}
	else
	{
		cout<<"the two circle's ubiety are tangent!"<<endl;
	}
	return 0;
}
int circles::class_num = 0;
int circles::get_class_num(void)
{
	return class_num;
}
void circles::add_class_num(void)
{
	class_num++;
}

const void circles::operate_value(int a)
{
	a = 100;
}
circles::circles()
{
	cout<<"circles constructed function"<<endl;
}
circles::circles(int a)
{
	cout<<"circles constructed function a"<<a<<endl;
}
circles::circles(int a,int b)
{
	cout<<"circles constructed function a b"<<a<<b<<endl;
}
circles::circles(circles &obj)
{
	cout<<"constructors function in obj"<<endl;
}
circles::~circles()
{
	cout<<"destructors function"<<endl;
}

testA::testA(int a,int b)
{
	cout<<"constructtestA a,"<<a<<"b"<<b<<endl;
}
testA::~testA()
{
	cout<<"this is destrcuctedA"<<endl;
}
testB::testB(int a,int b = 1,int m = 2,int n = 3):a1(m,m),a2(m,n),a3(4)
{
	cout<<"constructtestB a,"<<a<<"b"<<b<<endl;
}
testB::~testB()
{
	cout<<"this is destrcuctedB"<<endl;
}
