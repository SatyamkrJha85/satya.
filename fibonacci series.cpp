#include<stdio.h>
int main()
{

int a=0,b=1,c,n,i;
printf("enter a no of terms:\n");
scanf("%d",&n);
printf("fibonacci series \n");
for(i=0;i<n;i++)
{
	if(i<=1)
	c=i;
	else
	{
	c=a+b;
	a=b;
	b=c;
}
printf("%d\n",c);
}
return 0;
}
