#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("Catch the arguments: ");
    for(i=1; i<argc; i++) 
    	printf("%s ", argv[i]);
    printf("\n");
    return 0;
} 
