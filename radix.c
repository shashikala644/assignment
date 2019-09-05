
#include<stdio.h>
#include<stdlib.h>
int count=0;
char a[100];
char* radix_convert(int num,int radix);
  void main()
  {
      int b,n,i;
	char *p;

      printf("\nEnter the decimal number:\n");
      scanf("%d",&n);
      printf("\nEnter the base to be converted:\n");
      scanf("%d",&b);
	printf("\nbase %d equivalent of num %d is ",b,n);
	p=radix_convert(n,b); 
	for(i=count-1;i>=0;i--)
{
        printf("%c",*(p+i));
}
   	 printf("\n");

}
char* radix_convert(int num,int radix)
{
	int p,r,digit,*p1;
	p=num;
     	 do
    	{
        r=p%radix;
        digit='0'+r;
        if(digit>'9')
{
            digit=digit+7;
}
        a[count]=digit;
        count++;
        p=p/radix;
         } while(p!=0);
return a;
}
/*
Enter the decimal number:
10

Enter the base to be converted:
16

base 16 equivalent of num 10 is A.


Enter the decimal number:
10

Enter the base to be converted:
8

base 8 equivalent of num 10 is 12.

Enter the decimal number:
10

Enter the base to be converted:
2

base 2 equivalent of num 10 is 1010.


*/
