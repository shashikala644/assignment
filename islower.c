#include<stdio.h>
#include<stdlib.h>
void main()
{
char c;
printf("enter any character\n");
scanf("%c",&c);
	if((c<=122)&&(c>=97))

	{ 
		printf("given letter is lowercase:true");
	}
	else
	{
		printf("given letter is not lowercase:false");
	}
}
//islower() function returns n0n-zero if alphabet is lowercase otherwise zero
/*
enter any character
A
given letter is not lowercase:false.

enter any character
e
given letter is lowercase:true.

*/
