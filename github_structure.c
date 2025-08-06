//car
#include <stdio.h>

// Define a structure for Car
struct Car {
    char make[50];
    char model[50];
    int year;
};

int main() {
    struct Car car1;

    // Input car details
    printf("Enter car make: ");
    fgets(car1.make, sizeof(car1.make), stdin);

    printf("Enter car model: ");
    fgets(car1.model, sizeof(car1.model), stdin);

    printf("Enter car year: ");
    scanf("%d", &car1.year);

    // Remove newline characters from strings
    for (int i = 0; car1.make[i] != '\0'; i++) {
        if (car1.make[i] == '\n') {
            car1.make[i] = '\0';
            break;
        }
    }
    for (int i = 0; car1.model[i] != '\0'; i++) {
        if (car1.model[i] == '\n') {
            car1.model[i] = '\0';
            break;
        }
    }

    // Display car details
    printf("\nCar Information:\n");
    printf("Make : %s\n", car1.make);
    printf("Model: %s\n", car1.model);
    printf("Year : %d\n", car1.year);

    return 0;
}

//song
#include <stdio.h>

// Define a structure for Song
struct Song {
    char title[100];
    char artist[100];
    char album[100];
    float length; // length in minutes
};

int main() {
    struct Song song1;

    // Input song details
    printf("Enter song title: ");
    fgets(song1.title, sizeof(song1.title), stdin);

    printf("Enter artist name: ");
    fgets(song1.artist, sizeof(song1.artist), stdin);

    printf("Enter album name: ");
    fgets(song1.album, sizeof(song1.album), stdin);

    printf("Enter song length (in minutes): ");
    scanf("%f", &song1.length);

    // Remove newline characters from strings
    for (int i = 0; song1.title[i] != '\0'; i++) {
        if (song1.title[i] == '\n') {
            song1.title[i] = '\0';
            break;
        }
    }
    for (int i = 0; song1.artist[i] != '\0'; i++) {
        if (song1.artist[i] == '\n') {
            song1.artist[i] = '\0';
            break;
        }
    }
    for (int i = 0; song1.album[i] != '\0'; i++) {
        if (song1.album[i] == '\n') {
            song1.album[i] = '\0';
            break;
        }
    }

    // Display song details
    printf("\nSong Information:\n");
    printf("Title : %s\n", song1.title);
    printf("Artist: %s\n", song1.artist);
    printf("Album : %s\n", song1.album);
    printf("Length: %.2f minutes\n", song1.length);

    return 0;
}
