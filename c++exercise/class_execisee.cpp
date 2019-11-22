#include "all.h"
#include "iostream"
using namespace std;
#include "myteacher.h"
#include "circle_for_dot.h"
#include "dynamic_array.h"

class mycircle
{
private:
	double m_r;
	double m_s;
public:
	double get_r(void)
	{
		return m_r;
	}
	void set_r(double r)
	{
		m_r = r;
	}
	double get_s(void)
	{
		m_s = pi * m_r * m_r;
		return m_s;
	}
protected:
};

struct struct_s
{
private: int a;
public:	void printf_try(int ext_number)
	{
		a = ext_number;
		printf("a is %d\r\n",a);
	};
};
void printcircle_pointer(mycircle *p)
{
	cout<<"pointer p.get_s"<<p->get_s()<<endl;
}
void printcircle_quote(mycircle &p)
{
	p.set_r(20);
	cout<<"quote p.get_s"<<p.get_s()<<endl;
}
void printcircle_obj(mycircle p)
{
	p.set_r(100);
	cout<<"obj p.get_s"<<p.get_s()<<endl;
}
circles fourth_constrcted_func()
{
	circles a(1,2);
	return a;//will return an anonymous objec t.
}
//for obj behavior.
void obj_play()
{
	circles c1,c2;
	circles c3 = fourth_constrcted_func();//4 it will call once constructed function
	c2 = fourth_constrcted_func();//the anonymous object will be destroyed.
	testB b1(1,2,3,4);
}

void obj_play(circles p)
{
	cout<<"p's obj_play function"<<endl;
}

int factorial(int n)
{
	int res = 1;
	if(n == 0)
	{
		return 1;
	}
	while(n>=1)
	{
		res *= n;
		n--;
	}
	return res;
}
void main()
{
	//mycircle circle1;
	//double r = 10;
	//double s = 0;
	//circle1.set_r(r);
	//s = circle1.get_s();
	//cout<<"s = "<<s<<endl;

	//printcircle_pointer(&circle1);
	//printcircle_quote(circle1);
	//printcircle_obj(circle1);
	//cout<<"s = "<<circle1.get_s()<<endl;

	//struct_s s_try;
	//s_try.printf_try(100); 

	// 1 divide the class's declaration and realization
	//myteacher t1;
	//t1.set_age(10);
	//t1.get_age();
	//cube c1,c2;
	//c1.set_len_wid_high(1,1,1);
	//c2.set_len_wid_high(1,2,1);
	//if(c1.judge_same_cube(c2))
	//{
	//	cout<<"the cubes are different!"<<endl;
	//}
	//else
	//{
	//	cout<<"the cubes are same!"<<endl;
	//}
	///*c1.set_len_wid_high();*/
	//cout<<"the cube's surface acreage is:"<<c1.get_surface_acreage()<<endl;
	//cout<<"the cube's volume is :"<<c1.get_volume()<<endl;

	//2 dot and circle
	//dot d1;// if on construct function, it will call default construct function
	//circles c1 = (3,5);//first way: one paramter it's same to c1 = 5;
	//circles c2(3,5);   //secaond way:two paramter
	//circles c2();//secaond way:no paramter
	//circles c3 = circles(3,5);//third way:anonymous object
	//circles c0 = c1;//use c1 initialize c0

	//c1.cir_center.set_xy(0,0);
	//c1.set_circle_r(1);
	//c2.cir_center.set_xy(0,2.1);
	//c2.set_circle_r(1);
	//c1.judghe_two_circle_is_intersect(c2);
	//d1.set_xy(1,1);
	//c1.judge_dot_is_in_circle(d1);
	//for test object lifecycle
	/*obj_play();*/

	//3 four mechanisms of construction function
	//circles c0(1,2);
	//circles c1 = c0;//1
	//circles c2(c0);//2
	//obj_play(c2);//3
	/*circles c4 = fourth_constrcted_func();*/
	//obj_play();
	
	//4 deep copy and shallow copy:


	//5 class in class
	/*obj_play();*/

	//6 new and delete
	//int *p = new int;//alloc basic type;
	//*p = 20;
	//int *p2 = new int(30);
	//cout<<"*p2 "<<*p<<endl;
	//delete(p2);
	//int *p_array = new int[10];//new for array
	//p_array[0] = 10;
	//delete [] p_array;
	//mycircle *p_obj = new mycircle();//new for object.
	//delete p_obj;
	//free(p_obj);

	//7static 
	//circles c1,c2;
	//cout<<"get_r's result is "<<c1.get_r()<<endl;
	//cout<<"class_num"<<c1.get_class_num()<<endl;
	//c1.add_class_num();
	//c2.add_class_num();
	//cout<<"class_num"<<c1.get_class_num()<<endl;

	//8const decorate this pointer's space
	

	//9 dynamic_array
	//dynamic_array arr1(10,1);
	//dynamic_array arr2(arr1);
	//dynamic_array arr3;
	//arr1.set_array(2,2);
	//arr1.print_array();
	//cout<<endl;
	//arr2.print_array();
	//arr3 = arr1 = arr1;
	//arr2.print_array();
	//arr3.print_array();
	//cout<<arr2<<endl;
	 
	//10 operator overloading
	//complex c1(1,2);
	//complex c2(3,4);
	//complex c3 = c1 + c2;
	//c3.complex_print();
	//c3 = c1 - c2;
	//c3.complex_print();
	//c3++;
	//c3.complex_print();
	//++c3;
	//c3.complex_print();

	//int num[40][400];
	//int len[40][400];
	//int m,n;
	//scanf("%d",&m);
	//for(int i=1;i<=m;i++)
	//{
	//	len[i][0]=0;
	//	for(int j=1;j<=n;j++)
	//	{
	//		len[0][j]=-1;
	//		scanf("%d",&num[i][j]);
	//		if(num[i][j]) len[i][j]=len[i][j-1]+num[i][j];
	//		else len[i][j]=0;
	//	}
	//}
	//char a[] = "nimade";
	//char *b = "nimade";
	//printf("strlen a is %d\n",strlen(a));
	//printf("sizeof a is %d\n",sizeof(a));
	//printf("strlen b is %d\n",strlen(b));

	printf("%d\n",factorial(5));
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 4;
	int comb_matrix[120][5];
	for(i = 0;i < factorial(n);i++)
	{
		for(j = 0;j < n+1;j++)
		comb_matrix[i][j] = 1;
	}
	for(i = 2;i <= n;i++)
	{
		for(j = 1;j <= factorial(i-1);j++)
		{
			for(k = i;k >= 1;k--)
			{
				printf("i%d	",i,j,k);
				comb_matrix[j][k] = i;
			}
		}
	}
	//for(i = 0;i < factorial(n);i++)
	//{
	//	for(int j = 0;j < n;j++)
	//	{
	//		printf("%d ",comb_matrix[i][j]);
	//	}
	//	printf("\n");
	//}




















	 

	system("pause");
}



