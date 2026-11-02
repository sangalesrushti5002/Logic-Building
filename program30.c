#include<stdio.h>
#include<stdlib.h>    // to use macro exit_success

int main()
{
    char sName[30];                      //character array 
    int iAge = 0;
    float fMarks = 0.0f;

    
    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);            //enetr(\n) remains in input buffer
    
    printf("Enter your age :\n");
    scanf("%d",&iAge);

    printf("Enter your marks :\n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("your age is :%d\n",iAge);
    printf("your marks is: %f\n",fMarks);

    return EXIT_SUCCESS;
}