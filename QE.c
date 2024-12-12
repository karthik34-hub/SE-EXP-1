#include <stdio.h>
#include <math.h>

void quadratic_solution(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
    } else {
        printf("No real roots.\n");
    }
}
int main() {
    float a = -0.5, b = 12, c = -40;
    quadratic_solution(a, b, c);
    return 0;
}
