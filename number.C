#include<stdio.h>
main()
{
	int a;
	int b;
	printf("enter the first number: ");
	scanf("%d",&a);
	printf("enter the second number: ");
	scanf("%d",&b);
	if(a>b){
		printf("%d is bigger",a);
	}else{
		printf("%d is bigger",b);
	}
}