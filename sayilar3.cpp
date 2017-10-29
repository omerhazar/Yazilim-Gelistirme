#include <stdio.h>
#include <conio.h>

main()

{

int bosluk=1, sinir=5;
for(int i=0; i<5; i++)
{
	for(int a=0; a<bosluk; a++)
	    printf(" ");
	for(int c=1; c<=sinir; c++)
	   printf("%d",c);  
	   
	
	printf("\n");
	bosluk++;    
	sinir--;
	
}
int bos=5, sin=5;
for(int i=0; i<5; i++)
{
	for(int a=0; a<bos; a++)
	    printf(" ");
	for(int c=sin; c<=5; c++)
	   printf("%d",c);  
	   
	
	printf("\n");
	bos--;    
	sin--;
}
getch();
}
