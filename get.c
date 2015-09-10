#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024


void readContentofFile(char *s)
{
    char buf[MAX_LINE];  //define the buffer area
    FILE *f;            //set the pointer of file
    int length;             //count the number of char per line
    //check if the file exists
    if((f = fopen(s,"r")) == NULL)
    {
        printf("no such file");
        exit (1) ;
    }
    //print the content on the screen 
    while(fgets(buf,MAX_LINE,f) != NULL)
    {
        length = strlen(buf);
        buf[length-1] = '\0';  //remove '\0' tag
        printf("%s \n",buf);
    }
}



int main(int argc, char *argv[])
{
// read the arguments from user's input. 
// Only 2 arguments will be accepted.
// Other arguments number will be rejected and cause "slient exit".
    if (argc == 3)
    {
   		printf("Catch the arguments: %s %s", argv[1], argv[2]);
    }else{
    	printf("slient exit");
        exit (1) ;
    } 
    printf("\n");
    readContentofFile(argv[1]);
    return 0;
} 



