#pragma once// amount to include once
/***it's same to
#ifndef __MYTEACHER__
#define __MYTEACHER__
#endif
***/
class myteacher
{
private:
	int m_age;
	char name[20];
public:
	void set_age(int age);
	int get_age();
};

class cube
{
private:
	double m_length;
	double m_width;
	double m_hight;
public:
	void set_len_wid_high(double a = 0,double b= 0,double c = 0);
	double get_surface_acreage(void);
	double get_volume(void);
	double get_length(void);
	double get_width(void);
	double get_hight(void);
	int judge_same_cube(cube &v);
};