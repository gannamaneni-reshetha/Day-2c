#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter the n value");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
