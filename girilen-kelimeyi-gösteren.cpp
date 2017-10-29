#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL, "Turkish");

char kelime[20];
printf("Bir kelime girin: ");
scanf("%s", kelime);
printf("Girilen deger= %s", kelime);

getch();
}
