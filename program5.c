/*
    step 1 : Understand the problem statment
    step 2 : Write the algorithm
    step 3 : Decide the programming language
    step 4 : Write the program
    step 5 : Test the program
*/

///////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statment
//            User is going to enter any two integers
//            and we have to perform addition
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  step 2 : Write the algorithm
/*
    START
       Accept first number as No1
       Accept second number as No2
       Create the variable as Ans to store the reult
       Perform the Addition and store into Ans
       Display the result from Ans
    END
*/
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//   step 3 : Decide the programming language
//            We select C programming
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//  step 4 : Write the program
//
//////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;   //i=integer //intvalue1 = 0 is to remove garbage

    printf("enter first number : \n");
    scanf("%d", &iValue1);

    printf("enter second number : \n");
    scanf("%d", &iValue2);

    iResult = iValue1 + iValue2;                   //business logic

    printf("Addition is : %d\n",iResult);

    return 0;
}