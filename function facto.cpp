#include<stdio.h>
int fact(int);
int main()
{
	int num;
	int factorial;
	printf("enter a number");
	scanf("%d",&num);
	factorial=fact(num);
	printf("factorial of %d =%d",num,factorial);
	return 0;
}
int fact(int num)
{
	int i;
	int factorial=1;
	for(i=1;i<=num;++i)
	factorial=factorial*i;
	return(factorial);
	
}
