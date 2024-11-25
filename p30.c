// wap that opens a file in append mode and allows the user to add text to the end of the file
#include <stdio.h>

int main() {
    FILE *file;
    char text[1000];

    // Open the file in append mode
    file = fopen("file.txt", "a");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    printf("Enter text to append to the file : ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Text has been successfully added to the file.\n");

    return 0;
}
