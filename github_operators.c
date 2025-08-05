//swap two numbers
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

//arithmetic
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nSum = %d", a + b);
    printf("\nDifference = %d", a - b);
    printf("\nProduct = %d", a * b);
    if (b != 0) {
        printf("\nQuotient = %d", a / b);
    } else {
        printf("\nCannot divide by zero.");
    }
    return 0;
}

//convert
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}

//rectangle
#include <stdio.h>
int main() {
    float length, width, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = length * width;
    printf("Area of the rectangle = %.2f\n", area);
    return 0;
}

//odd or even
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}

//leapyear or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    } else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
