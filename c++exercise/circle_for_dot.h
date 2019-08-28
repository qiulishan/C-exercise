#pragma once
class dot
{
public:
	void set_xy(double x = 0,double y = 0);
	double get_x(void);
	double get_y(void);
	double get_two_dot_distance_square(dot &d);
private:
	double d_x;
	double d_y;
};
class circles
{
private:
	double cir_r;
	static int class_num;// class shared it
public:
	dot cir_center;
	static int get_class_num(void);
	void add_class_num(void);
	int judge_dot_is_in_circle(dot &d);
	int judghe_two_circle_is_intersect(circles &c);
	void set_circle_r(double r = 0);
	double get_r(void);
	const void operate_value(int a);
	circles();
	circles(int a);
	circles(int a,int b);
	circles(circles &obj);
	~circles();
};

class testA
{
public:
	int a;
	testA(int a,int b);
	~testA();
};

class testB
{
public:
	int m;
	testA a1,a2;
	const int a3;
	testB(int a,int b,int m,int n);
	~testB();
};

