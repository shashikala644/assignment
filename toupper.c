#include<stdio.h>
#include<stdlib.h>
void main()
{
char c;
printf("enter any character\n");
scanf("%c",&c);
	if((c<=122)&&(c>=97))

	{ 
		c=c-32;

		printf("%c",c);
	}
	else
	{
		printf("%c",c);
	}
}
//islower() function converts to lowercase if alphabet is uppercase otherwise remains same. 
/*
enter any character
a
A
enter any character
A
A

*/
