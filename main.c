#include<stdio.h>
#include<stdlib.h>

int main() 
{

	int a, b;

	//scanf_s("%d %d", &a, &b);


	/*if (a % b == 0) {
		c = a / b;
	}
	else {
		d = (float)a / b;
	}
	
	
	while (scanf_s("%d %d", &a, &b) != EOF)
	{
		printf("%d+%d=%d, %d-%d=%d, %d*%d=%d, %d/%d = %.2f\n", a, b, a + b, a, b, a - b, a, b, a * b, a, b, (float)a / b);
	}*/

	while (scanf_s("%d %d", &a, &b) != EOF)
	{
		if (a % b == 0) {
			printf("%d+%d=%d, %d-%d=%d, %d*%d=%d, %d/%d=%d\n", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b);
		}
		else {
			float c;
			c = (float)a / b;
			printf("%d+%d=%d, %d-%d=%d, %d*%d=%d, %d/%d=%.2f\n", a, b, a + b, a, b, a - b, a, b, a * b, a, b, c);
		}
	}


	return 0;
}