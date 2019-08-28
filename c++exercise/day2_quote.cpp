#include "all.h"

int pointer_quote_allocate_fun(int *&p)
{
	//do we need to judge the p value wether nor null ?
	p = (int *)malloc(sizeof(int)*100);
	if(p == NULL)
	{
		return -1;
	}
	return 0;
}

int pointer_quote_free_fun(int *&p)
{
	if(p == NULL)
	{
		return -1;
	}
	free(p);
	p = NULL;
	return 0;
}

void default_func_param(int x,int y)
{
	int i  = 0;
	for(i = 0;i < 2;i++)
	{
		cout<<"x"<<x<<endl;
		cout<<"y"<<y<<endl;
	}
}

int fun_overload(int a)
{
	return a = 2;
}

int fun_overload(int *p)
{
	return *p = 3;
}
void fun_overload(int a,int b)
{
	a = 1;
	b = 2;
	cout<<"a = "<<a<<endl;
	return;
}


















