#include<stdio.h>
int main()
{
	char d;
	printf("Enter a character: ");
	scanf("%c",&d);
	switch(d)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("%c is vowel",d);break;
		default:printf("%c is consonant",d);
	}
}		
	
