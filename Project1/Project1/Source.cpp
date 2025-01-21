#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

// Function declarations
void greet(void);                    // Student 1
int add(int a, int b);               // Student 2
int subtract(int a, int b);          // Student 3
double calculateArea(double radius); // Student 4
unsigned long long factorial(int n); // Student 5
void displayMenu(void);              // Student 6

int main(void) {
    // Variable declarations
    int choice;
    char input[100]; // For safer input handling

    // Display a welcome message
    printf("Welcome to the Collaborative Code Management Program!\n");

    // Call the display_menu() function
    displayMenu();

    // Accept user input for menu selection
    printf("\nEnter your choice: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Parse the input
        sscanf(input, "%d", &choice);
    }

    // Use a switch-case to handle menu options
    switch (choice) {
    case 1:
        greet();
        break;
    case 2: {
        int a, b;
        printf("Enter two numbers to add: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            sscanf(input, "%d %d", &a, &b);
            printf("Result: %d\n", add(a, b));
        }
        break;
    }
    case 3: {
        int a, b;
        printf("Enter two numbers to subtract: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            sscanf(input, "%d %d", &a, &b);
            printf("Result: %d\n", subtract(a, b));
        }
        break;
    }
    case 4: {
        double radius;
        printf("Enter the radius of the circle: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            sscanf(input, "%lf", &radius);
            printf("Area: %.2lf\n", calculateArea(radius));
        }
        break;
    }
    case 5: {
        int n;
        printf("Enter a number to calculate its factorial: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            sscanf(input, "%d", &n);
            printf("Factorial: %llu\n", factorial(n));
        }
        break;
    }
    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }

    return 0;
}

// Student 1: Implement greet() function
void greet(void) {
    char name[50];
    printf("Please enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove newline character from the input
        name[strcspn(name, "\n")] = '\0';
        printf("Hello, %s! Welcome to the Collaborative Code Management Program!\n", name);
    }
    else {
        printf("Hello! Welcome to the Collaborative Code Management Program!\n");
    }
}

// Student 2: Modify add() function to take user input
int add(int a, int b) {
    return a + b;
}

// Student 3: Complete subtract() function
int subtract(int a, int b) {
    return a - b;
}

// Student 4: Implement calculateArea() function
double calculateArea(double radius) {
    return radius * radius * 3.14159; // Assuming you want to calculate the area of a circle
}


// Student 5: Develop factorial() function
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Student 6: Implement displayMenu() function
void displayMenu(void) {
    printf("Menu:\n");
    printf("1. Greet\n");
    printf("2. Add two numbers\n");
    printf("3. Subtract two numbers\n");
    printf("4. Calculate the area of a circle\n");
    printf("5. Calculate the factorial of a number\n");
}
