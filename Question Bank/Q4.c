//WAP to identify A number is positive or negative
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num <=0.0)
   {
    if (num == 0.0)
    {
        printf("You entered 0");

    }
    else{
        printf("The number is negetive");
    }

    }
     else{
        printf("You enter positive number");
   }
}