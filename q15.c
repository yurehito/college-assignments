// Compute the Area and Circumference of a Circle Using a Function

#include <stdio.h>
#define PI 3.14159

// Function to compute area and circumference
void computeCircleProperties(float radius, float *area, float *circumference) {
    *area = PI * radius * radius;
    *circumference = 2 * PI * radius;
}

int main() {
    float radius, area, circumference;

    // Input the radius from the user
    printf("Enter the radius : ");
    scanf("%f", &radius);

    if (radius <= 0) {
        printf("Radius must be a positive number.\n");
    } else {
        // Pass the radius to computeCircleProperties
        computeCircleProperties(radius, &area, &circumference);

        // Display the results
        printf("Area = %.2f\n", area);
        printf("Circumference = %.2f\n", circumference);
    }

    return 0;
}
