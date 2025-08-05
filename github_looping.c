//natural numbers
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("First %d natural numbers are:\n", n);
    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}

//sum
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}

//multiplication table
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

//counte of vowels
#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    printf("Number of vowels in the string: %d\n", count);
    return 0;
}

//perfect
#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("%d is a Perfect Number.\n", num);
    } else
    {
        printf("%d is NOT a Perfect Number.\n", num);
    }
    return 0;
}

//armstrong
#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);
    return 0;
}

//max min
#include <stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
}

//smalllest element
#include <stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Smallest element: %d\n", min);
    return 0;
}

//merge
#include <stdio.h>
int main()
{
    int n1, n2, arr1[100], arr2[100], merged[200];
    int i = 0, j = 0, k = 0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        } else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n2)
    {
        merged[k++] = arr2[j++];
    }
    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

//position
#include<stdio.h>
int main()
{
    int arr[100], n, pos, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

//
