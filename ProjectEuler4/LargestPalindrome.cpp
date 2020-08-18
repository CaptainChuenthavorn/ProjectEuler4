#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y;
	int product, revProd,num1,num2, Product,max,keepX,keepY;
	max = 0;
	keepX = 0;
	keepY = 0;
	printf("Program Find the largest palindome number from a * b  \nEnter a : ");
	scanf("%d", &num1);
	printf("Enter b : ");
	scanf("%d", &num2);
	for (x = 100;x <= num1; x++) {
		for (y = 100; y <= num2;y++) {
			product = x * y;
			Product = product;
			revProd = 0;
				while (revProd >= 0)
				{
					//logic method
					revProd = revProd * 10 + (Product % 10);
					Product /= 10;
					
					if (revProd == product&& revProd%10!=0)
					{
						if (product > max)
						{
							max = product;
							keepX = x;
							keepY = y;
						}
					}
				}
		}
	}
	if (max == 0) {
		printf("Not have palindome number in this a * b");
	}
	else {
		printf("%d x %d = %d\n", keepX, keepY, max);
		printf("Largest palindome number is : %d", max);
	}
	return 0;
}