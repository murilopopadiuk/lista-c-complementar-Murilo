#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    float raio;
    scanf("%f", &raio);

    printf("Circunferencia: %.2f\n", 2 * PI * raio);
    return 0;
}