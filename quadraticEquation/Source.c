#include <stdio.h>
#include<math.h>

void quadEque()
{
	double a, b, c, checkEqu = 1.0, root, root2;
	printf("Enter the equation values:");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	checkEqu = ((pow(b, 2) - (4 * a*c)));
	
	if (checkEqu==0.0)
	{
		printf("The equation has 1 root.\n");
		root = (-b - (sqrt((pow(b, 2)) - 4 * a*c))) / (2 * a);
		printf("Root is:%.2lf\n", root);
	}
	else if (checkEqu>0)
	{
		printf("The equation has 2 roots.\n");
		root = (-b - (sqrt((pow(b, 2)) - 4 * a*c))) / (2 * a);
		root2 = (-b + (sqrt((pow(b, 2)) - 4 * a*c))) / (2 * a);
		printf("Roots are:%.2lf %.2lf\n", root,root2);
	}
	else
	{
		printf("The equation don't have a root.\n");
	}
}

int main()
{
	quadEque();

	system("PAUSE");
	return 0;
}