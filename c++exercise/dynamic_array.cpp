#include "dynamic_array.h"


dynamic_array::dynamic_array(void)
{
}


dynamic_array::~dynamic_array(void)
{
	if(this->p_array == NULL)
	{
		return;
	}
	delete [] this->p_array;
}
dynamic_array::dynamic_array(dynamic_array &array_ext)
{
	int i = 0;
	int len = array_ext.get_length();
	this->length = len;
	this->p_array = new double [len];

	if(len == 0)
	{
		cout<<"warning: the array_ext id 0"<<endl;
		return;
	}
	cout<<"we are in dynamic_array len is "<<len<<endl;
	//if(len > this->get_length())
	//{
	//	len = this->get_length();
	//	cout<<"warning: could not copy all element"<<endl;
	//}
	for(i = 0;i < len;i++)
	{
		this->p_array[i] = array_ext.get_array(i);
	}
}
dynamic_array::dynamic_array(int  length, double ini_value)
{
	int i = 0;
	if(length == 0)
	{
		this->p_array = NULL;
		this->length = 0;
		cout<<"array length is 0"<<endl;
		return;
	}
	this->p_array = new double [length];
	for(i = 0;i < length;i++)
	{
		this->p_array[i] = ini_value;
	}
	this->length = length;
}
void dynamic_array::set_array(int pos,double value)
{
	if(pos <= 0)
	{
		return;
	}
	this->p_array[pos] = value;
}
double dynamic_array::get_array(int pos)
{
	return this->p_array[pos];
}
int dynamic_array::get_length()
{
	return this->length;
}
double & dynamic_array::operator [](int i)
{
	if(this->p_array == NULL)
	{
		cout<<"array is null!"<<endl;
		// how to avoid null: return what???
	}
	return this->p_array[i];
}
ostream & operator<<(ostream &out,dynamic_array a)
{
	int i;
	for(i = 0;i < a.length;i++)
	{
		out<<a.p_array[i];
	}
	return out;
}
dynamic_array& dynamic_array::operator = (dynamic_array obj)
{
	int len;
	if(this->p_array != NULL)
	{
		delete [] this->p_array;
		len = 0;
	}
	len = obj.length;
	this->p_array = new double[len];
	int i;
	for(i = 0;i < len;i++)
	{
		//this->p_array[i] = obj.p_array[i];
		this->p_array[i] = obj[i];
	}
	return *this;
}
bool dynamic_array::operator ==(dynamic_array obj)
{
	int i;
	int len;
	if(this->length != obj.length)
	{
		return false;
	}
	len = this->length;
	for(i = 0;i < len;i++)
	{
		if((*this)[i] != obj[i])
		{
			return false;
		}
	}
	return true;
}
bool dynamic_array::operator !=(dynamic_array obj)
{
	//mathod 1
	//int i;
	//int len;
	//if(this->length != obj.length)
	//{
	//	return true;
	//}
	//len = this->length;
	//for(i = 0;i < len;i++)
	//{
	//	if((*this)[i] == obj[i])
	//	{
	//		return false;
	//	}
	//}
	//mathod 2
	return !(*this == obj);
}
void dynamic_array::print_array(void)
{
	int i = 0;
	for(i = 0;i < this->length; i++)
	{
		cout<<"dynamic pos "<<i<<" "<<this->p_array[i]<<endl;
	}
}
complex::complex(void)
{

}
complex::~complex(void)
{

}
complex::complex(int a,int b)
{
	this->a  = a;
	this->b = b;
}
complex operator+(complex c1,complex c2)
{
	complex c;
	c.a = c1.a + c2.a;
	c.b = c1.b + c2.b;
	return c;
}
void complex::complex_print(void)
{
	cout<<this->a<<"+"<<this->b<<"i"<<endl;
}

complex complex::operator- (complex c2)
{
	complex temp;
	temp.a = this->a - c2.a;
	temp.b = this->b - c2.b;
	return temp;
}

complex complex::operator++ (int)
{
	complex temp = *this;
	this->a++;
	this->b++;
	return temp;
}

complex complex::operator++ ()
{
	this->a++;
	this->b++;
	return *this;
}


























