#include <stdio.h>
#include <conio.h>
main()
{
	char harf;
	printf("Lutfen bir karakter girin\n");
	scanf("%c",&harf);
	switch(harf)//ÝF(HARF=='A')
	{
		case 'a' :
			printf("a harfine bastiniz sanki\n");break;
		case 'b' :
			printf("b harfine bastiniz sanki\n");break;
		case 'c' :
			printf("c harfine bastiniz sanki\n");break;
		default:
			printf("a ,b ,c ye basmadiniz\n");break;
	}
getch();
}
