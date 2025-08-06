//character
#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data;

    // Assign and display integer
    data.i = 42;
    printf("Integer value: %d\n", data.i);

    // Assign and display float
    data.f = 3.14;
    printf("Float value  : %.2f\n", data.f);

    // Assign and display character
    data.c = 'A';
    printf("Character value: %c\n", data.c);

    return 0;
}
