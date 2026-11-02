#include<stdio.h>
#include<stdlib.h>    // to use macro exit_success

int main()
{
    char sName[30];                      //character array
    
    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);            //usser accept input until enter(\n)        

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}