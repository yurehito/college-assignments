// wap to impliment union in C. Create a structure of `person with pid, name and other credentials with proper datatypes and print the same
#include<stdio.h>

// Define a structure for a person
struct person {
    int pid;
    char name[30];
    char address[50];
    char phone[11];
};
typedef struct person Person;

int main() {
    Person x;

    // Input person details
    printf("Input Pid: ");
    scanf("%d", &x.pid);

    // Clear the input buffer
    while (getchar() != '\n'); // Clears the input buffer safely

    printf("Input Name: ");
    fgets(x.name, sizeof(x.name), stdin);
    x.name[strcspn(x.name, "\n")] = '\0';

    printf("Input Address: ");
    fgets(x.address, sizeof(x.address), stdin);
    x.address[strcspn(x.address, "\n")] = '\0'; 

    printf("Input Phone number: ");
    fgets(x.phone, sizeof(x.phone), stdin);
    x.phone[strcspn(x.phone, "\n")] = '\0';

    printf("\nDetails of the Person:\n");
    printf("Pid: %d\nName: %s\nAddress: %s\nPhone number: %s\n", x.pid, x.name, x.address, x.phone);

    return 0;
}
