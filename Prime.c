#include<stdio.h>
void main()
{
	int a ,r=0,i;
	printf("Enter a number:");
	scanf("%d",&a);
	  for(i=2;i<=a-1;i++)
	  {
	    if(a%i==0)
	    {
	    r=r+1;
    	}
      }
	if (r==0)
	{
    printf("Number is prime");

    }
    else
    {
     printf( "Number is not prime");
    }  
}

