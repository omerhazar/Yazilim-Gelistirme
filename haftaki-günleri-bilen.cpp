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
			printf("Sal�");break;
		case 3:
			printf("�ar�amba");break;
		case 4:
			printf("Per�embe");break;
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
