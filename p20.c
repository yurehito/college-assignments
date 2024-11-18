// Write a program to perform the following operations on strings:
// 1. Convert all lowercase characters to uppercase.
// 2. Convert all uppercase characters to lowercase.
// 3. Calculate the number of vowels in the string.
// 4. Reverse the string.
// 5. Concatenate two strings without using strcat().
// 6. Concatenate two strings using strcat().
// 7. Compare two strings using strcmp().
// 8. Copy one string to another using strcpy().

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void to_lowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int count_vowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

void reverse_string(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void concatenate_manual(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[j++] = str1[i++];
    }
    i = 0;
    while (str2[i] != '\0') {
        result[j++] = str2[i++];
    }
    result[j] = '\0';
}

int main() {
    char str1[100], str2[100], result[200], copy[100];
    
    // Input strings
    printf("Enter the first string : ");
    scanf(" %[^\n]", str1); // Input string including spaces
    printf("Enter the second string : ");
    scanf(" %[^\n]", str2);

    // Convert to uppercase
    printf("\nOriginal String 1 : %s", str1);
    to_uppercase(str1);
    printf("\nUppercase String 1 : %s", str1);

    // Convert to lowercase
    to_lowercase(str1);
    printf("\nLowercase String 1 : %s", str1);

    // Count vowels in str1
    int vowels = count_vowels(str1);
    printf("\nNumber of vowels in String 1 : %d", vowels);

    // Reverse str1
    reverse_string(str1);
    printf("\nReversed String 1 : %s", str1);

    // Concatenate without strcat()
    concatenate_manual(str1, str2, result);
    printf("\nConcatenated (Manual) Strings : %s", result);

    // Concatenate with strcat()
    strcpy(result, str1); // Copy str1 into result
    strcat(result, str2); // Concatenate str2
    printf("\nConcatenated (strcat) Strings : %s", result);

    // Compare strings using strcmp()
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("\nThe two strings are equal.");
    } else if (comparison < 0) {
        printf("\nString 1 is less than String 2.");
    } else {
        printf("\nString 1 is greater than String 2.");
    }

    // Copy string using strcpy()
    strcpy(copy, str1);
    printf("\nCopied String 1 into another variable : %s\n", copy);

    return 0;
}