#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char data[100];

    // Write to file
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    fprintf(file, "Hello, this is written to the file.\n");
    fclose(file);

    // Append to file
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(file, "This line is appended.\n");
    fclose(file);

    // Read file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error reading file.\n");
        return 1;
    }
    printf("\nFile Content:\n");
    while (fgets(data, sizeof(data), file)) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}
