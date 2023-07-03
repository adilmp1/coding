#include<stdio.h>
#include<stdlib.h>

// Function to find the length of string
int strlen(char arr[]){

    int i=0;
    while (arr[i]!='\0'){
        i++;
    }
    return i;
}

// Function to copy a string to another array
int strcpy(char arr1[],char arr2[]){
    int i;
    for (i=0;arr2[i]!='\0';i++){
        arr1[i]=arr2[i];
    }
    arr1[i]='\0';
}


// Function to reverse a string
int strrev(char str[]){
    char rstr[50];
    int i=0,l;
    l=strlen(str)-1;

    while (l>=0){
        rstr[i]=str[l];
        i++;
        l--;
    }
    strcpy(str,rstr); 
}

int main(){
    
    char str[50];
    system("clear");
    printf("Enter the string: ");
    gets(str);

    //printf("The length : %d",strlen(str));
    strrev(str);
    puts(str);
}