#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
float a, b, c;
void main()
{
	
	printf("aX^2+bX+c=0\n������a,b,c��ֵ");
	
	printf("a=");
	scanf("%f", &a);
	
	printf("b=");
	scanf("%f", &b);
	
	printf("c=");
	scanf("%f", &c);						//����a��b��c��ֵ

	float D = b * b - 4 * a * c;			//�󦤣��˴���D��ʾ��

	if (D > 0)								//��x1,x2��ֵ
	{
		float x1 = (-b + sqrt (D)) / 2*a;
		float x2 = (-b - sqrt (D)) / 2*a;
		printf("x1=%f\nx2=%f\n", x1, x2);
	}
	if (D == 0)							   
	{
		float x = -b / 2*a;
		printf("x1,2=%d", x);

	}
	if (D < 0)
	{
		printf("The root of the equation cannot be found in the Real number system");
	}

}