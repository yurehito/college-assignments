// wap to open a file and count the number of characters by character and line by line on the screen
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int char_count = 0, line_count = 0;

    file = fopen("demo.txt", "r");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }
    }

    fclose(file);

    printf("Number of characters : %d\n", char_count);
    printf("Number of lines : %d\n", line_count);

    return 0;
}
