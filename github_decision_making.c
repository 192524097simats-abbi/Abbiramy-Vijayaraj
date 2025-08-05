//greatest
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d is larger than %d.\n", num1, num2);
    } else if (num2 > num1)
    {
        printf("%d is larger than %d.\n", num2, num1);
    } else
    {
        printf("Both numbers are equal.\n");
    }
    return 0;
}

//vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }
    return 0;
}

//age
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0) {
        printf("Invalid age.\n");
    } else if (age <= 12) {
        printf("You are a child.\n");
    } else if (age <= 19) {
        printf("You are a teenager.\n");
    } else if (age <= 59) {
        printf("You are an adult.\n");
    } else {
        printf("You are a senior citizen.\n");
    }
    return 0;
}

//multiple
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is a multiple of both 3 and 5.\n", num);
    } else if (num % 3 == 0) {
        printf("%d is a multiple of 3.\n", num);
    } else if (num % 5 == 0) {
        printf("%d is a multiple of 5.\n", num);
    } else
    {
        printf("%d is not a multiple of 3 or 5.\n", num);
    }
    return 0;
}
