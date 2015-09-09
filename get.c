#include <stdio.h>
int main(int argc, char *argv[])
{
// read the arguments from user's input. 
// Only 2 arguments will be accepted.
// Other arguments number will be rejected and cause "slient exit".
    int i;
    printf("Catch the arguments: ");
    if (argc == 3)
    {
   		printf("%s %s", argv[1], argv[2]);
    }else{
    	printf("slient exit");
    } 
    printf("\n");
    return 0;
} 
