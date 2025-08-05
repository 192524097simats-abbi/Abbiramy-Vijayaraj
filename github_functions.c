//sum
#include <stdio.h>

// Function to calculate sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    result = sum(num1, num2); // Function call

    printf("Sum = %d\n", result);

    return 0;
}

//area
#include <stdio.h>
#define PI 3.1416

// Function to calculate area of a circle
float areaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius); // Function call

    printf("Area of the circle = %.2f\n", area);

    return 0;
}

//convert
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = fahrenheitToCelsius(fahrenheit); // Function call

    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}

//prime
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0; // Not prime

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}


