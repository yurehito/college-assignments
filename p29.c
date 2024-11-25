// wap to open a file and count the number of characters by character and line by line on the screen
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int char_count = 0, line_count = 0;

    // Open the file for reading
    file = fopen("demo.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        char_count++;  // Count each character

        // If the character is a newline, increment the line count
        if (ch == '\n') {
            line_count++;
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Number of characters : %d\n", char_count);
    printf("Number of lines : %d\n", line_count);

    return 0;
}
