#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //Klavyeden girilen iki say�n�n toplam�n� bulan bir c program�//
    int s1,s2,t;
    printf("Birici sayiyi giriniz");
    scanf("%d",&s1);
    printf("ikinci sayiyi giriniz");
    scanf("%d",&s2);

    t=s1+s2;

    printf("\n\nSayilarin Toplami: %d",t);

    return 0;
}
