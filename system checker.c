#include <stdio.h>

double kmToMeters(double km) {
    return km * 1000;
}

int main() {
    double km;
    printf("Input Kilometers: ");
    scanf("%lf", &km);
    printf("%.2f kilometers is equal to %.2f meters\n", km, kmToMeters(km));
    return 0;
}
