#include <stdio.h>
#include <conio.h>

main()

{

int bosluk=1, sinir=5;
for(int i=0; i<5; i++)
{
	for(int a=0; a<bosluk; a++)
	    printf(" ");
	for(int b=sinir; b>=1; b--)
	   printf("%d",b);
	for(int c=1; c<=sinir; c++)
	   printf("%d",c);  
	   
	
	printf("\n");
	bosluk++;    
	sinir--;
	
}
getch();
}
