#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//һά���鴫��
//void test(int arr[])//����
//{}
//void test(int arr[10])//���ԣ�10д�벻дû���κμ�ֵ������ʡ�ԣ���ʹд��Ҳû��ϵ
//{}
//void test(int *arr)//����
//{}
//void test2(int *arr[20])//����
//{}
//void test2(int** arr)//����
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
//��ά���鴫��
//void test(int arr[3][5])//����
//{}
//void test1(int arr[][5])//����
//{}
//void test2(int arr[3][])//������
//{}
//void test3(int arr[][])//������
//{}
//void test4(int (*arr)[5])//�����ǵ�һ�еĵ�ַ��������ָ��
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
//һ��ָ�봫��
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test(&a);//ok
//	test(p);//ok �������Դ�&a  p
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}
//����ָ�봫��
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
//����ָ��
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
//	printf("%p", add);//&������ �� ������ ��һ�����Ǻ����ĵ�ַ
//	int (*pa)(int, int)=&add;
//  printf("%d\n",(pa)(2,3));
//  printf("%d\n",(*pa)(2,3));
//  printf("%d\n",(**pa)(2,3));//*ֻ�ǰ��裬�����壬д�ϱ������
//	return 0;
//}

//(*(void (*)())0)(); һ�κ�������    void(*)()-�Ǻ���ָ������,
//��0ǿ��ת������Ϊ����ָ������ void(*)()����ʱ0Ϊһ��������ַ

//              ����  ����ָ������
//void (*signal( int ,void(*)(int)))(int)    signal( int ,void(*)(int))�������൱�� add(int,int)
//�������Ϊvoid(*)(int)  signal( int ,void(*)(int))���������ʽ��������д��Ӧд����ʽ
//signal��һ�������������ú���������2������һ����int ,�ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
//signal�����ķ���������һ������ָ�룬�ú���ָ��ָ��ĺ���������int,���������� void

//����ָ������
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
//	//��Ҫһ����������4�������ĵ�ַ
//	int (*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//5   -1   6    0
//	}
//	return 0;
//}

