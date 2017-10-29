#include <stdio.h>
#include <conio.h>
main()
{
	int sayi1,sayi2,secim;
	
	printf("birinci sayiyi giriniz:  ");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:   ");
	scanf("%d",&sayi2);
	printf("1.TOPLAMA\n");
	printf("2.ÇIKARMA\n");
	printf("SECÝMÝNÝZÝ GÝRÝN LÜTFEN (1 & 2)");
	scanf("&d",secim);
	if (secim==1)
		printf("%d,sayi1+sayi2");
	else if  (secim==2)
		printf("&d,sayi1-sayi2");
	else
		printf("SECECEK MÝSÝN ARTIK BREMÝN");
getch();
	


}
