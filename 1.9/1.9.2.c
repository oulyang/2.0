#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf,能够指向my_strcpy
//char* (*pf)(char*,const char*) ;
////写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//char* (* pfArr[4] )(char*,const char*);

////计算器
//// 函数指针数组的用途 - 转移表
//void menu()
//{
//	printf("*******计算器*******\n");
//	printf("***1.add    2.sub***\n");
//	printf("***3.mul    4.div***\n");
//	printf("***5.xor    0.exit**\n");
//}
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
//int xor(int x, int y)
//{
//	return x ^ y;
//}
////回调函数
// void Calc(int (*pf)(int,int))
//{
//	 int a = 0;
//	 int b = 0;
//	printf("请输入要计算的数：>\n");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", pf(a, b));
//}
////int main()
////{
////	int input = 0;
////	int a = 0;
////	int b = 0;
////	int (*pfArr[])(int, int) = { 0,add,sub,mul,div,xor};//增加功能，要变
////	do
////	{
////		menu();
////		printf("请选择：>");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 5)//增加功能，要变
////		{
////			printf("请输入要计算的数：>");
////			scanf("%d%d", &a, &b);
////			int ret = pfArr[input](a, b);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("退出\n");
////		}
////		else
////		{
////			printf("选择错误\n");
////		}
////	} while (input);
////	return 0;
////}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		case 5:
//			Calc(xor);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////int main()
////{
////	int input = 0;
////	int a = 0;
////	int b = 0;
////	do
////	{
////		menu();
////		printf("请选择：>\n");
////		scanf("%d", &input);
////
////		switch (input)
////		{
////		case 1:		
////			printf("请输入要计算的数：>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n",add(a, b));
////			break;
////		case 2:
////			printf("请输入要计算的数：>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n", sub(a, b));
////			break;
////		case 3:
////			printf("请输入要计算的数：>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n", mul(a, b));
////			break;
////		case 4:
////			printf("请输入要计算的数：>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n", div(a, b));
////			break;
////		case 0:
////			printf("退出程序\n");
////			break;
////		default:
////			printf("输入错误，请重新输入\n");
////			break;
////		}
////	} while (input);
////	return 0;
////}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[] = &arr;
//
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组,函数指针的数组
////指向函数指针数组的指针
////ppfArr是一个数组指针，指针指向的数组有4个元素，元素类型为函数指针int (*)(int,int)
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	return 0;
//}