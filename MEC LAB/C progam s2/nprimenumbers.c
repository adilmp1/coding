#include<stdio.h>
int prime(int num)
{
	int value;
	value=1;
	if(num==1)
		return 0;
	if(num==2)
		return 1;
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			return 2;
			break;
		}
	} 	
	if (value==1)
	{
		return 1;
	}
	
	
}
int main()
{	
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);	
	for(int i=1;i<=n;i++)
	{
		if(prime(i)==1)
			printf("%d\n",i);
	}
	
	return 0;
}		
