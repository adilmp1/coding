#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%7==0)
		continue;			
		printf("%d\n", i);
	}
	return 0;		
}			
	 	
