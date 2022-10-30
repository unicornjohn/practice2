// Check a character Vowel or Constant
#include<stdio.h>
int main()
{
    char ch;
    int lowercaseVowel,uppercasevowel;
    printf("Enter your alphabet: ");
    scanf("%c",&ch);
    lowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercasevowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if(lowercaseVowel || uppercasevowel)
    {
        printf("%c is Vowel",ch);
    }
    else
    {
        printf("%c is constant",ch);
    }
    return 0;
}