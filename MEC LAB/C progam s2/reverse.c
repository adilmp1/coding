#include<stdio.h>
int main()
{
	int rev, n1, n2, rem;
	printf("Enter a number: ");
	scanf("%d",&n1);
	n2=n1;
	rev=0;
	while(n1!=0)
	{
		rem=n1%10;
		rev=rev*10+rem;
		n1/=10;
	}
	printf("The reverse of the number %d = %d",n2,rev);
	return 0;
}	
		
