#include<stdio.h>
void main()
{
char c;
printf("enter any character\n");
scanf("%c",&c);
	if((c<=90)&&(c>=65))

	{ 
		printf("given letter is uppercase:true");
	}
	else
	{
		printf("given letter is not uppercase:false");
	}
}
//isupper() function returns n0n-zero if alphabet is uppercase otherwise zero
/*
enter any character
A
given letter is uppercase:true.
enter any character
a
given letter is not uppercase:false.
*/
