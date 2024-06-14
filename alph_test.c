#include<stdio.h>

int main()
{
    char alp;

    printf("Enter an alphabet: ");
    scanf("%c", &alp);

    if((alp == 'a' || alp =='e' || alp == 'i' || alp == 'o' || alp == 'u') ||
      (alp == 'A' || alp == 'E' || alp == 'I' || alp == 'o' || alp == 'U'))
      {
        printf("The alphabet %c is a vowel.\n", alp);
      }
    else if((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z'))
    {
        printf("The alphabet %c is a consonant.\n", alp);
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}