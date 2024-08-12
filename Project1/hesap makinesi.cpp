#include <stdio.h>
int main() {
	long a, b, d = -1, e;
	double c;
	while (d != 0)
	{
		printf("birinci sayiyi girin: ");
		scanf_s("%d", &a);
		printf("\nikinci sayiyi girin: ");
		scanf_s("%d", &b);
		printf("\nyapilacak islemi senin\ntopalama islemi icin: 1\ncikartma islemi icin: 2\ncarpma  islemi icin: 3\nbolme islemi icin; 4 bitirmek icin 0; \n");
		scanf_s("%d", &d);
		if (d == 1)
		{
			e = a + b;
			printf("%d + %d = %d\n", a, b, e);
		}
		else if (d == 2)
		{
			e = a - b;
			printf("%d + %d = %d\n", a, b, e);
		}
		else if (d == 3) {
			c = a * b;
			printf("%d * %d = %.6lf\n", a, b, c);
		}
		else if (d == 4) {
			c = (double)a / b;
			printf("%d / %d = %.9lf\n", a, b, c);
		}
		else {

			printf("yanlis secim yaptin");


		}

	}



	return 0;
}