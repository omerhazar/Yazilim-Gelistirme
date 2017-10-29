#include <stdio.h>
#include <conio.h>

main()

{
	int adet=9;
	int bosluk=1;
	for(int i=0; i<5; i++)
	{ 
	for(int a=0; a<bosluk; a++)
	    printf(" ");
	for(int j=0; j<adet; j++)
	    printf("*");
	    
	adet-=2;
	bosluk++;
	printf("\n");
	}
	
	int at=1;
	int bos=5;
	for(int i=0; i<5; i++)
	{ 
	for(int a=0; a<bos; a++)
	    printf(" ");
	for(int j=0; j<at; j++)
	    printf("*");
	    
	at+=2;
	bos--;
	printf("\n");
	}
	
	getch();
}


