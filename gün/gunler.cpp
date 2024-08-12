#include <stdio.h>
int main() {

	int a = 0;
	printf("1 ve 7 arasi bir sayi gir\n");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:  
			printf("pazartesi");
			break;
		
		case 2:  
			printf("sali");
			break;
		
		case 3:  
			printf("carsamba");
			break;
		
		case 4:  
			printf("persembe");
			break;
		
		case 5:  
			printf("cuma");
			break;
		
		case 6:  
			printf("cumartesi");
			break;
		case 7:  
			printf("pazar");
			break;
		default:
				printf("yanlis bir sayi girdiniz");
	}
	
	return 0;
}
