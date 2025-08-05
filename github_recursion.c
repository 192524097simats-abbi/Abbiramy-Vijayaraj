//factorial
#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1; // Base case
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    long long fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(num);
        printf("Factorial of %d = %lld\n", num, fact);
    }

    return 0;
}

//fibonacci
#include <stdio.h>

// Recursive function to find n-th Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0; // Base case
    else if (n == 1)
        return 1; // Base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("The %d-th Fibonacci number is: %d\n", n, fibonacci(n));
    }

    return 0;
}

//sum of natural numbers
#include <stdio.h>

// Recursive function to find sum of first n natural numbers
int sumNatural(int n) {
    if (n == 0)
        return 0; // Base case
    else
        return n + sumNatural(n - 1); // Recursive case
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Sum is not defined for negative numbers.\n");
    } else {
        printf("Sum of first %d natural numbers = %d\n", n, sumNatural(n));
    }

    return 0;
}

//gcd
#include <stdio.h>

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a; // Base case
    else
        return gcd(b, a % b); // Recursive case
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("GCD is not defined for non-positive numbers.\n");
    } else {
        printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    }

    return 0;
}
