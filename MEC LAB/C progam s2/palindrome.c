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
	if (n2==rev)
		printf("%d is palindrome",n2);
	else
		printf("%d is not palindrome",n2);	
	return 0;
}	
		
