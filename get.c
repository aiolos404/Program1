#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void getContentofFile(char *source, char *destination)
{
    FILE *f1,*f2;
    char buffer;
    //Check if source f1 is readable
    if((f1=fopen(source,"rt"))==NULL){
        printf("Cannot READ %s\n",source);
        exit(1);
    }
    //Check if destination f2 is writeable
    if((f2=fopen(destination,"wt+"))==NULL){
        printf("Cannot WRITE %s\n",destination);
        exit(1);
    }
    //Read from source f1 to destination f2
    while((buffer=fgetc(f1))!=EOF)
        fputc(buffer,f2);
    fclose(f1);
    fclose(f2);
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
    getContentofFile(argv[1],argv[2]);
    return 0;
} 

