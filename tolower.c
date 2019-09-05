#include<stdio.h>
#include<stdlib.h>
void main()
{
char c;
printf("enter any character\n");
scanf("%c",&c);
	if((c<=90)&&(c>=65))

	{ 
		c=c+32;

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
A
a

enter any character
a
a

*/
