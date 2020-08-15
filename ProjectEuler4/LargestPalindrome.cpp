#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y;
	int product, revProd, Product,keep,keepX,keepY;
	for (x = 10;x < 100; x++) {
		for (y = 10; y < 100;y++) {
			product = x * y;
			Product = product;
			revProd = 0;
				while (revProd >= 0)
				{
					//ขั้นตอนสลับเลขหน้าหลัง
					revProd = revProd * 10 + Product % 10;
					Product /= 10;	
					
					if (revProd == product)
					{
						// เก็บตัวแปร
						keep = product;
						keepX = x;
						keepY = y;
						break;
					}
				}
		}
	}
	printf("%d x %d = %d\n", keepX, keepY, product);
	printf("Largest Product is : %d",keep);
	return 0;
}