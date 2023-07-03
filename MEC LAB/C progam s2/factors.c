#include<stdio.h>
int main()
{
	long int n;
	int i;
	printf("Enter a number: ");
	scanf("%ld",&n);
	for (i=1;i<=n/2;i++)
	{
		if(n%i==0)
			printf("%d\n",i);
	}		
	return 0;	
}	
		
