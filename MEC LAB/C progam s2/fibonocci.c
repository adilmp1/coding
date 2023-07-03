#include<stdio.h>
int main()
{
	int a=1, b=0, c, n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",a);
	}
}			
		
