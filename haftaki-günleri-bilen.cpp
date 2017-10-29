#include <stdio.h>
#include <conio.h>
main()
{
	int sayi=0;
	printf("Haftanin gun sayisini girin:");
	scanf("%d",&sayi);
	switch (sayi) //if(sayi==1)
	{
		case 1:
			printf("Pazartesi");break;
		case 2:
			printf("Salý");break;
		case 3:
			printf("Çarþamba");break;
		case 4:
			printf("Perþembe");break;
		case 5:
			printf("Cuma");break;
		case 6:
			printf("Cumartesi");break;
		case 7:
			printf("Pazar");break;
		default : printf("AKlLLl BlDlK SENl");
	}
getch();
}
