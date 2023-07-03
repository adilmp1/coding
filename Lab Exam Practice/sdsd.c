#include<stdio.h>

int strlen(char arr[]){

    int i=0;
    while (arr[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    char str[50];
    printf("Enter the String: ");
    gets(str);
    
    int x=strlen(str);
    printf("The Number of characters is %d",x);
}