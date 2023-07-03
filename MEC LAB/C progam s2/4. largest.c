#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter number 1: ");
	scanf("%d",&a);
	printf("\nEnter number 2: ");
	scanf("%d",&b);
	printf("\nEnter number 3: ");
	scanf("%d",&c);
	
	
	if (a>b && a>c)
		printf("\n%d is the biggest number",a);
	else if (b>a && b>c)
		printf("\n%d is the biggest number",b);
	else
		printf("\n%d is the biggest number",c);
			
}											
	
