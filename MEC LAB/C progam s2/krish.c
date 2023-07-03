#include<stdio.h>
int main()
{	
	int n,digit,temp,sum=0,f;
	printf("Enter Number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		f=1;
		for(int i=1;i<=digit;i++)
		{
			f=f*i;
		}
		sum=sum+f;
		n/=10;
	}
	if (sum==temp)
		printf("%d is Krishnamoorthi Number",temp);
	else
		printf("%d is Not krishnamoorthi number",temp);
	return 0;
}		
