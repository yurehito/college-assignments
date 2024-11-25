// wap that opens a file for reading and display the contexts of the file in binary mode and text mode
#include <stdio.h>

int main() {
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file) {
        printf("\nText Mode:\n");
        printf("%s", filename);
        fclose(file);
    } else {
        printf("Error opening file in text mode.\n");
    }

    file = fopen(filename, "rb");
    if (file) {
        printf("\nBinary Mode:\n");
        printf("%s", filename);
        fclose(file);
    } else {
        printf("Error opening file in binary mode.\n");
    }

    return 0;
}
