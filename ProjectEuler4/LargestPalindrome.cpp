#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y;
	int product, revProd, Product;
	for (x = 10;x < 100; x++); {
		for (y = 10; y < 100;y++) {
			product = x * y;
			Product = product;
			revProd = 0;
			printf("product : %d revProd : %d\n", Product, revProd);
				while (revProd >= 0)
				{
					revProd = revProd * 10 + Product % 10;
					Product /= 10;	
					//printf("product : %d revProd : %d\n", Product, revProd);
				}
			if (revProd == product)
			{
				printf("%d x %d = %d\n", x, y, product);
				break;
			}
		}
	}
	printf("Largest Product is : %d",product);
	return 0;
}