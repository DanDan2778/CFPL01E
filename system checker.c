#include <stdio.h>

int reverse_digits(int n) {
    int reversed_n = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed_n = reversed_n * 10 + digit;
        n /= 10;
    }
    return reversed_n;
}

int main() {
    int n = 12345;
    int reversed_n = reverse_digits(n);
    printf("%d\n", reversed_n);  // Output: 54321
    return 0;
}

// #include <stdio.h>

// int main(){
//     int n = 54321;
//     n /= 10;

// printf("%d", n);
// }