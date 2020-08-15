#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y;
	int product, revProd, Product,max,keepX,keepY;
	for (x = 100;x < 1000; x++) {
		for (y = 100; y < 1000;y++) {
			product = x * y;
			Product = product;
			revProd = 0;
				while (revProd >= 0)
				{
					//ขั้นตอนสลับเลขหน้าหลัง
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
	printf("%d x %d = %d\n", keepX, keepY, max);
	printf("Largest Product is : %d",max);
	return 0;
}