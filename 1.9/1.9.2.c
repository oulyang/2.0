#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf,�ܹ�ָ��my_strcpy
//char* (*pf)(char*,const char*) ;
////дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (* pfArr[4] )(char*,const char*);

////������
//// ����ָ���������; - ת�Ʊ�
//void menu()
//{
//	printf("*******������*******\n");
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
////�ص�����
// void Calc(int (*pf)(int,int))
//{
//	 int a = 0;
//	 int b = 0;
//	printf("������Ҫ���������>\n");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", pf(a, b));
//}
////int main()
////{
////	int input = 0;
////	int a = 0;
////	int b = 0;
////	int (*pfArr[])(int, int) = { 0,add,sub,mul,div,xor};//���ӹ��ܣ�Ҫ��
////	do
////	{
////		menu();
////		printf("��ѡ��>");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 5)//���ӹ��ܣ�Ҫ��
////		{
////			printf("������Ҫ���������>");
////			scanf("%d%d", &a, &b);
////			int ret = pfArr[input](a, b);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("�˳�\n");
////		}
////		else
////		{
////			printf("ѡ�����\n");
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
//		printf("��ѡ��>\n");
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������\n");
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
////		printf("��ѡ��>\n");
////		scanf("%d", &input);
////
////		switch (input)
////		{
////		case 1:		
////			printf("������Ҫ���������>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n",add(a, b));
////			break;
////		case 2:
////			printf("������Ҫ���������>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n", sub(a, b));
////			break;
////		case 3:
////			printf("������Ҫ���������>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n", mul(a, b));
////			break;
////		case 4:
////			printf("������Ҫ���������>\n");
////			scanf("%d%d", &a, &b);
////			printf("%d\n", div(a, b));
////			break;
////		case 0:
////			printf("�˳�����\n");
////			break;
////		default:
////			printf("�����������������\n");
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
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������,����ָ�������
////ָ����ָ�������ָ��
////ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ�أ�Ԫ������Ϊ����ָ��int (*)(int,int)
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	return 0;
//}