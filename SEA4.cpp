#include <stdio.h>
#include <conio.h>
main()
{
	int sayi1,sayi2,sayi3,sayi4,sayi5;
	printf("birinci sayiyi girin");
	scanf("%d",&sayi1);
		printf("ikinci sayiyi girin");
	scanf("%d",&sayi2);
		printf("ucuncu sayiyi girin");
	scanf("%d",&sayi3);
		printf("dorduncu sayiyi girin");
	scanf("%d",&sayi4);
		printf("besinci sayiyi girin");
	scanf("%d",&sayi5);
	
	if(sayi1>sayi2 && sayi1>sayi3 && sayi1>sayi4 && sayi1>sayi5 )
{
		printf("Girdiginiz sayilarin en buyugu 1 dýr");
}
else if(sayi2>sayi1 && sayi2>sayi3 && sayi2>sayi4 && sayi2>sayi5 )
{
		printf("Girdiginiz sayilarin en buyugu  2 dýr");
		
}else if(sayi3>sayi1 && sayi3>sayi2 && sayi3>sayi4 && sayi3>sayi5 )
{
		printf("Girdiginiz sayilarin en buyugu  3 dýr");
}
else if(sayi4>sayi1 && sayi4>sayi2 && sayi4>sayi3 && sayi4>sayi5 )
{
		printf("Girdiginiz sayilarin en buyugu  4 dýr");
}
else if(sayi5>sayi1 && sayi5>sayi2 && sayi5>sayi3 && sayi5>sayi4 )
{
		printf("Girdiginiz sayilarin en buyugu  5 dýr");
}
getch();
}
/*enbuyuk=sayi1;
if(sayi2>enbuyuk)
enbuyuk=sayi2;
if(sayi3>enbuyuk)
enbuyuk=sayi3;
if(sayi4>enbuyuk)
enbuyuk=sayi4;
if(sayi5>enbuyuk)
enbuyuk=sayi5;

printf("girdiginiz sayilardan en buyugu %d dýr",enbuyuk);
getch();*/
