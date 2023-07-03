#include<stdio.h>
int main()
{	
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<=15;i++)
	{
		printf("%d x %d = %d",i,n,i*n);
		printf("\n");
	}
	
	return 0;
}		
