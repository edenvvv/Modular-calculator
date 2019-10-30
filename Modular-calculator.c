#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int Zp, math, i = 0, num1, num2, sum = 0, Answer = 0;
	printf("enter your sadea\n");
	scanf("%d", &Zp);
	printf("please insert 0-for plus , 1-for minus \n");
	printf("please insert 2-for multiplication , 3-for Division \n");
	scanf("%d", &math);
	switch (math)
	{
	case 0:
		printf("enter your numburs\n");
		scanf("%d%d", &num1, &num2);
		sum = num1 + num2;
		for (i = 0; sum > Zp; i++)
		{
			sum = sum - Zp;
			if (sum < Zp)
			{
				Answer = +sum;
			}
		}
		printf(" your Answer is:%d\n", Answer);
		break;

	case 1:
		printf("enter your numburs\n");
		scanf("%d%d", &num1, &num2);
		sum = num1 - num2;
		if (sum >= 0)
		{

			for (i = 0; sum > Zp; i++)
			{
				sum = sum - Zp;
				if (sum < Zp)
				{
					Answer = +sum;
				}
			}
			printf(" your Answer is:%d\n", Answer);
		}
		else
		{
			for (i = 0; sum < Zp; i++)
			{
				sum = sum + Zp;
				if (sum > Zp)
				{
					Answer = +sum;
				}
			}
			printf(" your Answer is:%d\n", Answer - Zp);
		}
		break;
	case 2:
		printf("enter your numburs\n");
		scanf("%d%d", &num1, &num2);
		sum = num1 * num2;
		for (i = 0; sum > Zp; i++)
		{
			sum = sum - Zp;
			if (sum < Zp)
			{
				Answer = +sum;
			}
		}
		printf(" your Answer is:%d\n", Answer);
		break;
	case 3:
		printf("enter your numburs\n");
		scanf("%d%d", &num1, &num2);
		if (num2 == 0)
		{
			printf("ERROR!!!\n");
		}
		else
		{

			sum = num1 / num2;
			for (i = 0; sum > Zp; i++)
			{
				sum = sum - Zp;
				if (sum < Zp)
				{
					Answer = +sum;
				}
			}
			printf(" your Answer is:%d\n", Answer);
		}
		break;
	default:
		printf("ERROR!!!\n");
		break;
	}
}