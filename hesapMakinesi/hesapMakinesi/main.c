#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {


	int sayi1, sayi2;
	int toplam;
	int c�karma;
	int carpma;
	double bolme;
	char islem;


	printf("------Hesap Makinesi------\n");

	printf("\nislemi seciniz: ");
	islem = getchar();

	printf("\nBir sayi giriniz: ");
	scanf_s("%d", &sayi1);

	printf("\nikinci sayi girin: ");
	scanf_s("%d", &sayi2);

	

	if (islem == '+')
	{
		toplam = sayi1 + sayi2;
		printf("\nsonuc: %d ", toplam);
	}
	
	if (islem == '-')
	{
		c�karma = sayi1 - sayi2;
		printf("\nsonuc: %d", c�karma);
	}
	
	if (islem == '*')
	{
		carpma = sayi1 * sayi2;
		printf("\nsonuc: %d", carpma);
	}
	
	if (islem == '/')
	{
		bolme = (double)sayi1 / (double)sayi2;
		printf("\nsonuc: %.3f", bolme);
	}
	

	


	


	return 0;
}
