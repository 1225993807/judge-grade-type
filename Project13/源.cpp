#include<stdio.h>
int main()
{
	void grade(int a);
	float x;
	int y;
	printf("please input a grade:");
	scanf("%f", &x);
	y = int(x + 0.5);
	grade(y);
	return 0;
}

void grade(int a)
{
	switch (a)
	{
	case 100:
	case 99:
	case 98:
	case 97:
	case 96:
	case 85:
	case 94:
	case 93:
	case 92:
	case 91:
	case 90:
		printf("your grade is A lever");
		break;
	default:
		printf("your grade is B level");
		break;
	}
}