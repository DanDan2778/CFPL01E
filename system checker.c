#include <stdio.h>

// Function declarations
void input(int *n, int *m);
void factorial(int n, int *factn, int *factm, int *factdiffnm);
int compute(int factn, int factm, int factdiffnm);
void display(int c);

// Input function to get values of n and m
void input(int *n, int *m) {
    printf("Enter the Value of n: ");
    scanf("%d", n);  // Directly modifies the variable in main by dereferencing the pointer
    
    printf("Enter the Value of m: ");
    scanf("%d", m);  // Directly modifies the variable in main by dereferencing the pointer
}

// Factorial function to compute n!, m!, and (n - m)!
void factorial(int n, int *factn, int *factm, int *factdiffnm) {
    *factn = 1; 
    *factm = 1; 
    *factdiffnm = 1;

    for (int i = 1; i <= n; i++) {
        *factn *= i;  // Dereferencing to store the value
    }
    
    for (int i = 1; i <= *factm; i++) {
        *factm *= i;  // Dereferencing to store the value
    }
    
    for (int i = 1; i <= (n - *factm); i++) {
        *factdiffnm *= i;  // Dereferencing to store the value
    }
}

// Compute function to calculate the combination
int compute(int factn, int factm, int factdiffnm) {
    float c = factn / (factm * factdiffnm);

    return c;
}

// Display function to output the result
void display(int c) {
    printf("C(n, m) = %d\n", c);
}

// Main function
int main() {
    int n, m;  // Variables to store user input
    input(&n, &m); // Pass addresses to input function

    // Validate input
    if (m > n) {
        printf("Invalid input: m should be less than or equal to n.\n");
        return 1; // Exit with an error code
    }

    int factn, factm, factdiffnm;
    factorial(n, &factn, &factm, &factdiffnm); // Pass addresses to factorial function

    int cnm = compute(factn, factm, factdiffnm); // Compute combination
    display(cnm); // Display the result

    return 0;
}
