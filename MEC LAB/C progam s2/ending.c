#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int n=1,j,i,n1;
	printf("Enter ending number: ");
	scanf("%d",&n1);
	for(i=1;i<n1;i++)
	{
	 	for(j=1;j<=i;j++)
	 	{
	 	   	printf("%d ",n++);
	 	   	if(n==(n1+1))
	 	   		exit(0);
	 	}   	 
		printf("\n");
	}
	
	return 0;
}		
