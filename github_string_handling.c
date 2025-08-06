//length
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Adjust length if fgets adds newline character
    if (str[length - 1] == '\n') {
        length--;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}

//remove
#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from str1 if present
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        if (str2[j] == '\n') { // Skip newline from str2
            j++;
            continue;
        }
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null terminate the concatenated string

    printf("Concatenated string: %s\n", str1);

    return 0;
}

//convert
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to uppercase
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // ASCII difference between lowercase and uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

//reverse
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length manually
    while (str[i] != '\0') {
        if (str[i] == '\n') { // Remove newline from fgets
            str[i] = '\0';
            break;
        }
        i++;
    }

    j = i - 1; // Last character index

    // Reverse the string
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

