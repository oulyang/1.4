#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//printf("%d", ch);
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int password[20] = { 0 };
//	printf("shurumima");
//	scanf("%s\n", password);
//	printf("qinqueren");
//	a = getchar();
//	if ('Y' == a)
//		printf("quercg");
//	else 
//	else 
//		printf("shibai");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//	return 0;
//}
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d\n", *pa);
	return 0;
}