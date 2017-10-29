#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL, "Turkish");

char ifade[20];
printf("Bir kelime girin: ");
gets(ifade);
printf("Girilen deðer= %s", ifade);

getch();
}
