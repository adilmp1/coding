#include<stdio.h>
int main()
{	
	int n=1,j,i,n1;
	printf("Enter number: ");
	scanf("%d",&n1);
	for(i=1;i<n1;i++)
	{
	 	for(j=1;j<=i;j++)
	 	   	printf("%d ",n++); 
		printf("\n");
	}
	
	return 0;
}		
