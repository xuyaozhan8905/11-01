#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int power(int q, int w);
int main() {
	int a, b;
	printf("Enter the base¡G");
	scanf_s("%d",&a);
	printf("Enter the exponent¡G");
	scanf_s("%d",&b);
	printf("%d\n",power(a,b));
	system("pause");
	return 0;
}
int power(int q,int w) {
	int i,z=1;
	for (i = 1; i <= w; i++)
	{
		z = z * q;
	}
	return z;
}