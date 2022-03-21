#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
float a, b, c;
void main()
{
	
	printf("aX^2+bX+c=0\n请输入a,b,c的值");
	
	printf("a=");
	scanf("%f", &a);
	
	printf("b=");
	scanf("%f", &b);
	
	printf("c=");
	scanf("%f", &c);						//输入a，b，c的值

	float D = b * b - 4 * a * c;			//求Δ（此处用D表示）

	if (D > 0)								//求x1,x2的值
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