#include<stdio.h>
int main() {
	float a;
	printf("Enter Baht : ");
	scanf_s("%f", &a);
	if (a < 0)
		printf("ERROR");
	else
	printf("%.2f Baht equals %.2f pound", a, a / 41.43);
	return 0;
}