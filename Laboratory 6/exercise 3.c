#include <stdio.h>

// Write a program containing a function that will compute and display the combination of m taken n where:
// C(n,m)= n!/(m! (n-m)!)

void input(int *n, int *m);
int factorial(int num);
int compute(int fact_n, int fact_m, int fact_diffnm);
void display(int fact_n, int fact_m, int fact_diffnm, int calculate);

int main(){
    int num_n, num_m;
    input(&num_n, &num_m);
    int fact_n = factorial(num_n);
    int fact_m = factorial(num_m);
    int fact_diffnm = factorial(num_n - num_m);
    int calculate = compute(fact_n, fact_m, fact_diffnm);
    display(fact_n, fact_m, fact_diffnm, calculate);

    return 0;
}

void input(int *n, int *m){
    printf("Enter n: ");
    scanf("%d", n);

    printf("Enter m (where m < n): ");
    scanf("%d", m);
}

int factorial(int num){
    int fact = 1;
    int i;
    
    for (i = 1; i <= num; i++){
        fact *= i;
    }

    return fact;
}
// C(n,m)= n!/(m! (n-m)!)
int compute(int fact_n, int fact_m, int fact_diffnm){
    int c = fact_n / (fact_m * fact_diffnm);

    return c;
}

void display(int fact_n, int fact_m, int fact_diffnm, int calculate){
    printf("The Factorial of n is %d\n", fact_n);
    printf("The Factorial of m is %d\n", fact_m);
    printf("The Factorial of (n - m) is %d\n", fact_diffnm);
    printf("C(n,m) = %d", calculate);
}