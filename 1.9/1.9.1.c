#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//一维数组传参
//void test(int arr[])//可以
//{}
//void test(int arr[10])//可以，10写与不写没有任何价值，可以省略，即使写错也没关系
//{}
//void test(int *arr)//可以
//{}
//void test2(int *arr[20])//可以
//{}
//void test2(int** arr)//可以
//{}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,88,9,0 };
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//二维数组传参
//void test(int arr[3][5])//可以
//{}
//void test1(int arr[][5])//可以
//{}
//void test2(int arr[3][])//不可以
//{}
//void test3(int arr[][])//不可以
//{}
//void test4(int (*arr)[5])//传的是第一行的地址，是数组指针
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	tset1(arr);
//	//test2(arr);
//	//test3(arr);
//	test4(arr);
//	return 0;
//}
//一级指针传参
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test(&a);//ok
//	test(p);//ok 函数可以传&a  p
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}
//二级指针传参
//void test(int** p)
//{}
//int main()
//{
//	int n = 1;
//	int* p = &n;
//	int** pn = &p;
//	test(pn);
//	test(&p);
//	int* arr[10];
//	test(arr);
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}
//函数指针
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d", c);
//	printf("%p", &add);
//	printf("%p", add);//&函数名 和 函数名 都一样，是函数的地址
//	int (*pa)(int, int)=&add;
//  printf("%d\n",(pa)(2,3));
//  printf("%d\n",(*pa)(2,3));
//  printf("%d\n",(**pa)(2,3));//*只是摆设，无意义，写上便于理解
//	return 0;
//}

//(*(void (*)())0)(); 一次函数调用    void(*)()-是函数指针类型,
//把0强制转换类型为函数指针类型 void(*)()，此时0为一个函数地址

//              整型  函数指针类型
//void (*signal( int ,void(*)(int)))(int)    signal( int ,void(*)(int))函数，相当于 add(int,int)
//可以理解为void(*)(int)  signal( int ,void(*)(int))，但表达形式不能这样写，应写成上式
//signal是一个函数声明，该函数参数有2个，第一个是int ,第二个是函数指针，该函数指针指向的函数的参数是int,返回类型是void
//signal函数的返回类型是一个函数指针，该函数指针指向的函数参数是int,返回类型是 void

//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int (*pa)(int,int) = add;//sub//mul//div
//	//需要一个数组需存放4个函数的地址
//	int (*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//5   -1   6    0
//	}
//	return 0;
//}

