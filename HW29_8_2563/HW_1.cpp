#include<stdio.h>
int main() {
	float a;
	printf("Enter Baht : ");
	scanf_s("%f", &a);
	printf("%.2f Baht equals %.2f pound", a, a / 41.43);
	return 0;
}