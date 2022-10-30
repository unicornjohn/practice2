//Check A character is an alphabet or not
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter alphabet: ");
    scanf("%c",&ch);
    if((ch >='a' && ch <='z' )||( ch>='A' && ch <='Z'))
    {
        printf("%c is alphabet ",ch);
    }
    else{
        printf("%c is not alphabet",ch);
    }
}