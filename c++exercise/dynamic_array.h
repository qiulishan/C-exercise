#pragma once
#include "iostream"
using namespace std;

class dynamic_array
{
public:
	dynamic_array(void);
	~dynamic_array(void);
	dynamic_array(int  length,double ini_value);
	dynamic_array(dynamic_array &array_ext);
	void set_array(int pos,double value);
	double get_array(int pos);
	int get_length();
	void print_array(void);
	double& operator [](int i);
	dynamic_array& operator = (dynamic_array obj);
	bool operator ==(dynamic_array obj);
	bool operator !=(dynamic_array obj);
	friend ostream &operator << (ostream &cout,dynamic_array a);
private:
	double *p_array;
	int length;
protected:

};
class complex
{
public:
	friend complex operator+(complex c1,complex c2);
	complex(void);
	complex(int a,int b);
	~complex(void);
	void complex_print(void);
	complex operator- (complex c2);
	complex operator++ (int);
	complex operator++ ();
private:
	int a;
	int b;
protected:
};
//class inherit_class:private dynamic_array
//class inherit_class:protected dynamic_array

class inherit_class:public dynamic_array
{
public:
	int a;
};



