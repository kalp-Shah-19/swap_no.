#include<stdio.h>
main()
{
	int a;
	int b;
	printf("Please Enter a value for a \n");
	scanf("%d",&a);
	printf("The Number You entered is: a = %d \n",a);
	printf("Please Enter a value for b \n",b);
	scanf("%d",&b);
	printf("The Number You entered is: b = %d\n",b); 
	a=a+b;
    b=a-b;
    a=a-b;
    printf("The new values of a and b are :a = %d ,b = %d",a,b);
    return 0;
	
	}
