#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void main()
{
    fork();
    fork();
    fork();
    fork();
    printf("forked\n");
}