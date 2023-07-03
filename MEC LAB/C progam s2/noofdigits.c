#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	b=0;
	while(a!=0)
	{
		b++;
		a/=10;
	}
	printf("The number of digits of the enterd number is %d",b);	
	
}
